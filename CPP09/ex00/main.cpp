/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:04:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/18 17:35:00 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <cctype>
#include <map>
#include <algorithm>

std::map<std::string, double> dataMap;

unsigned int	countDots(std::string str)
{
	int i = -1;
	unsigned int countDots = 0;

	while (str[++i])
		if (str[i] == '.')
			countDots++;
	return (countDots);
}

std::string removeWhitespace(const std::string& str)
{
	std::string result;
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		if (!std::isspace(*i))
		{
			result += *i;
		}
	}
	return result;
}

bool	checkDate(std::string line)
{
	struct tm dateStruct;
	std::string dateString;
	std::stringstream dateStream(line);
	std::getline(dateStream, dateString, '|');
	// std::cout << "line: " << line << std::endl;
	std::cout << "dateString: \"" << dateString << "\"" << std::endl;
	char *result = strptime(dateString.c_str(), "%Y-%m-%d", &dateStruct);
	if (!result)
		return (false);
	std::cout << "result: " << dateStruct.tm_mday << std::endl;
	return (true);
}

bool	checkValue(std::string line)
{
	float floatValue = -1;
	int intValue = -1;
	std::string buffer, valueString;
	std::stringstream valueStream(line);
	std::getline(valueStream, buffer, '|');
	std::getline(valueStream, valueString);
	// std::cout << "line: " << line << std::endl;
	std::cout << "valueString: \"" << valueString << "\"" << std::endl;
	std::stringstream convertedValue(valueString);
	if (countDots(valueString) == 0)
	{
		convertedValue >> intValue;
		if ((intValue > 1000 || intValue < 0))
			return (false);
		std::cout << "int value: \"" << intValue << "\"" << std::endl;
	}
	else if (countDots(valueString) == 1)
	{
		convertedValue >> floatValue;
		if ((floatValue > 1000 || floatValue < 0))
			return (false);
		std::cout << "float value: \"" << floatValue << "\"" << std::endl;
	}
	else
		return (false);
	convertedValue >> floatValue;
	buffer = removeWhitespace(buffer);
	dataMap[buffer.c_str()] = floatValue;
	return (true);
}

bool	checkLine(std::string line, int currentLine)
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

int	main(int argc, char **argv)
{
	std::stringstream readFile;
	std::string fileContent;
	std::stringstream readDatabasefile;
	std::string databasefileContent;
	
	try
	{
		if (argc != 2)
		{
			throw std::runtime_error("Please use ./btc filename.");
		}
		std::ifstream inputfile(argv[1]);
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
		// fileContent = readFile.str();
		readDatabasefile << databasefile.rdbuf();
		// databasefileContent = readDatabasefile.str();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
		return (1);
	}
	int i = 1;
	// while (std::getline(readDatabasefile, databasefileContent))
	// {
	// 	std::cout << databasefileContent << std::endl;
	// 	checkLine(databasefileContent, i++);
	// }
	while (std::getline(readFile, fileContent))
	{
		std::cout << fileContent << std::endl;
		checkLine(fileContent, i++);
	}
	std::cout << "dataMap: " << dataMap["2011-01-04"] << std::endl;
	std::map<std::string, double>::iterator it = dataMap.lower_bound("2011-01-03");
	if (it != dataMap.begin())
	{
		it--;
		std::cout << "dataMap lower_bound: " << it->first << ", " << it->second << std::endl;
	}
	else
	{
		std::cout << "no lower key found" << std::endl;
	}
}
