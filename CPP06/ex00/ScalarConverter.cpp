#include "ScalarConverter.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:03:20 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 14:03:21 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &source)
{
	(void)source;
	return(*this);
}

void ScalarConverter::convert(std::string input)
{
	std::string types[4] = {"char", "int", "float", "double"};
	int i = 0;
	while (i < 4)
	{
		if (types[i] == checkType(input))
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			convertChar(input);
			break;
		case 1:
			convertInt(input);
			break;
		case 2:
			convertFloat(input);
			break;
		case 3:
			convertDouble(input);
			break;
		default:
			printCrap();
			break;
	}
}

std::string ScalarConverter::checkType(std::string input)
{
	int notDigitCount = ScalarConverter::isNumber(input);
	int	countDots = ScalarConverter::countDots(input);
	int	inputLength = input.length();
	if (!inputLength)
		return ("crap");
	if (notDigitCount == 1 && inputLength == 1)
		return ("char");
	else if (notDigitCount == 0)
		return ("int");
	else if (notDigitCount == 1 && (input[0] == '-' || input[0] == '+'))
		return ("int");	
	else if (notDigitCount == 2 && countDots == 1 && input[inputLength - 1] == 'f')
		return ("float");	
	else if (notDigitCount == 3 && countDots == 1 && input[inputLength - 1] == 'f' && (input[0] == '-' || input[0] == '+'))
		return ("float");
	else if (notDigitCount == 1 && countDots == 1)
		return ("double");
	else if (notDigitCount == 2 && countDots == 1 && (input[0] == '-' || input[0] == '+'))
		return ("double");
	else if (input == "+inf" || input == "-inf" || input == "nan")
		return ("double");
	else if (input == "+inff" || input == "-inff" || input == "nanf")
		return ("float");//maybe +inf or -inf
	else
		return ("crap"); //maybe shit input
}

unsigned int	ScalarConverter::isNumber(std::string str)
{
	int i = -1;
	unsigned int notDigitCount = 0;

	while (str[++i])
		if (!isdigit(str[i]))
			notDigitCount++;
	return (notDigitCount);
}

unsigned int	ScalarConverter::countDots(std::string str)
{
	int i = -1;
	unsigned int countDots = 0;

	while (str[++i])
		if (str[i] == '.')
			countDots++;
	return (countDots);
}

void ScalarConverter::convertChar(std::string str)
{
	std::cout << str << "is a char" << std::endl;
}

void ScalarConverter::convertInt(std::string str)
{
	long double ldNumber;
	std::stringstream stringstream(str);
	stringstream >> ldNumber;
	if (ldNumber > static_cast<long long>(std::numeric_limits<int>::max())
			|| ldNumber < static_cast<long long>(std::numeric_limits<int>::min()))
		std::cout << "integer too high" << std::endl;
	else
		std::cout << "integer" << std::endl;
}

void ScalarConverter::convertFloat(std::string str)
{
	std::cout << str << "is a float" << std::endl;
}

void ScalarConverter::convertDouble(std::string str)
{
	std::cout << str << "is a double" << std::endl;
}

void ScalarConverter::printCrap(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}


