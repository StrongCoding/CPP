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
	char	charNumber;
	int		intNumber;
	float	floatNumber;
	double	doubleNumber;

	std::stringstream stringstream(input);
	stringstream >> doubleNumber;

	charNumber = static_cast<char>(doubleNumber);
	intNumber = static_cast<int>(doubleNumber);
	floatNumber = static_cast<float>(doubleNumber);


	if ((doubleNumber == 0 && input != "0") || input == "nan" || input == "+inf" || input == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (doubleNumber > 127 || doubleNumber < 0)
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (doubleNumber < 32 || doubleNumber > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char :" << charNumber << std::endl;
	}
	std::cout << "int  :" << intNumber << std::endl;
	std::cout << "float:" << floatNumber << std::endl;
	std::cout << "double:" << doubleNumber << std::endl;
}