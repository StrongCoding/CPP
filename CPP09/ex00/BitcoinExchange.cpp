/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:57:37 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/21 10:37:33 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string inputFileName)
{
	std::stringstream readFile;
	std::string fileContent;
	std::stringstream readDatabasefile;
	std::string databasefileContent;

	std::ifstream inputfile(inputFileName.c_str());
	if (!inputfile.is_open())
	{
		throw std::runtime_error("Error: could not open inputfile.");
	}
	std::ifstream databasefile("data.csv");
	if (!databasefile.is_open())
	{
		throw std::runtime_error("Error: could not open databasefile.");
	}
	readFile << inputfile.rdbuf();
	readDatabasefile << databasefile.rdbuf();
	int i = 1;
	while (std::getline(readDatabasefile, databasefileContent))
	{
		// std::cout << databasefileContent << std::endl;
		if (i == 1 && databasefileContent == "date,exchange_rate")
			continue;
		checkLineDatabase(databasefileContent, i++);
	}
	i = 1;
	while (std::getline(readFile, fileContent))
	{
		if (i == 1 && fileContent == "date | value")
			continue;
		checkLine(fileContent, i++);
	}
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		//insert code here... maybe
	}
	return (*this);
}

bool	BitcoinExchange::checkDate(std::string line)
{
	struct tm dateStruct;
	std::string dateString;
	std::stringstream dateStream(line);
	std::getline(dateStream, dateString, '|');
	// std::cout << "line: " << line << std::endl;
	// std::cout << "dateString: \"" << dateString << "\"" << std::endl;
	char *result = strptime(dateString.c_str(), "%Y-%m-%d", &dateStruct);
	if (!result)
		return (false);
	if ((dateStruct.tm_mon == 3 || dateStruct.tm_mon == 5 || dateStruct.tm_mon == 8 || dateStruct.tm_mon == 10 ) && dateStruct.tm_mday == 31)
		return (false);
	if (dateStruct.tm_mon == 1 && dateStruct.tm_mday > 29)
		return (false);
	if (dateStruct.tm_mon == 1 && dateStruct.tm_mday == 29 && !isLeapYear(dateStruct.tm_year + 1900))
		return (false);
	// std::cout << "result: " << dateStruct.tm_mday << std::endl;
	return (true);
}

bool	BitcoinExchange::checkValue(std::string line)
{
	float floatValue = -1;
	// int intValue = -1;
	std::string buffer, valueString;
	std::stringstream valueStream(line);
	std::getline(valueStream, buffer, '|');
	std::getline(valueStream, valueString);
	// std::cout << "line: " << line << std::endl;
	// std::cout << "valueString: \"" << valueString << "\"" << std::endl;
	std::stringstream convertedValue(valueString);
	if (valueString.length() == 0)
		return (false);
	valueString = removeWhitespace(valueString);
	// std::cout << "length ok"<< valueString << "." << std::endl;
	if (!isNumber(valueString))
		return (false);
	// std::cout << "isnumber ok" << std::endl;
	if (countDots(valueString) > 1)
		return (false);
	// std::cout << "countDots ok" << std::endl;
	convertedValue >> floatValue;
	if ((floatValue > 1000 || floatValue < 0))
		return (false);
		// std::cout << "float value: \"" << floatValue << "\"" << std::endl;
	convertedValue >> floatValue;
	buffer = removeWhitespace(buffer);
	// m_dataMap[buffer.c_str()] = floatValue;
	std::map<std::string, double>::iterator it = m_dataMap.lower_bound(buffer.c_str());
	if (m_dataMap.find(buffer) == m_dataMap.end())
	{
		if (it != m_dataMap.begin())
		{
			it--;
			// std::cout << "closest date: " << it->first << " => " << floatValue << " => " << it->second * floatValue << std::endl;
			std::cout << buffer << " => " << floatValue << " => " << it->second * floatValue << std::endl;
		}
		else
		{
			std::cout << "no lower key found" << std::endl;
		}
	}
	else
		std::cout << buffer << " => " << floatValue << " => " << m_dataMap[buffer] * floatValue << std::endl;
	return (true);
}

bool	BitcoinExchange::checkLine(std::string line, int currentLine)
{
	if (!checkDate(line))
	{
		std::cout << "Error Date in line: " << currentLine << std::endl;
		return (false);
	}
	if (!checkValue(line))
	{
		std::cout << "Error Value in line: " << currentLine << std::endl;
		return (false);
	}
	return (true);
}

unsigned int	BitcoinExchange::countDots(std::string str)
{
	int i = -1;
	unsigned int countDots = 0;

	while (str[++i])
		if (str[i] == '.')
			countDots++;
	return (countDots);
}

std::string BitcoinExchange::removeWhitespace(const std::string& str)
{
	std::string result;
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		if (!std::isspace(*i))
		{
			result += *i;
		}
	}
	return (result);
}


bool	BitcoinExchange::checkDateDatabase(std::string line)
{
	struct tm dateStruct;
	std::string dateString;
	std::stringstream dateStream(line);
	std::getline(dateStream, dateString, ',');
	// std::cout << "line: " << line << std::endl;
	// std::cout << "dateString: \"" << dateString << "\"" << std::endl;
	char *result = strptime(dateString.c_str(), "%Y-%m-%d", &dateStruct);
	if (!result)
		return (false);
	// std::cout << "result: " << dateStruct.tm_mday << std::endl;
	return (true);
}

bool	BitcoinExchange::checkValueDatabase(std::string line)
{
	float floatValue = -1;
	std::string buffer, valueString;
	std::stringstream valueStream(line);
	std::getline(valueStream, buffer, ',');
	std::getline(valueStream, valueString);
	// std::cout << "line: " << line << std::endl;
	// std::cout << "valueString: \"" << valueString << "\"" << std::endl;
	std::stringstream convertedValue(valueString);
	if (!isNumber(valueString))
		return (false);
	if (countDots(valueString) > 1)
		return (false);
	if (valueString.length() == 0)
		return (false);
	convertedValue >> floatValue;
	if (floatValue < 0)
		return (false);
	buffer = removeWhitespace(buffer);
	m_dataMap[buffer.c_str()] = floatValue;
	return (true);
}

bool	BitcoinExchange::checkLineDatabase(std::string line, int currentLine)
{
	if (!checkDateDatabase(line))
	{
		std::cout << "Database Error Date in line: " << currentLine << std::endl;
		return (false);
	}
	if (!checkValueDatabase(line))
	{
		std::cout << "Database Error Value in line: " << currentLine << std::endl;
		return (false);
	}
	return (true);
}

bool BitcoinExchange::isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return (true);
	return (false);
}

bool	BitcoinExchange::isNumber(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]) && (str[i] != '.'))
			return (false);
	return (true);
}