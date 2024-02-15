/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:12:46 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/15 11:27:08 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <bitset>
#include <cstring>
#include <cmath>

int main(int argc, char **argv)
{
	float fvalue = std::numeric_limits<float>::max();
	unsigned long longRepresentation = 0;
	std::memcpy(&longRepresentation, &fvalue, sizeof(fvalue));
	std::bitset<32> maxfbits(longRepresentation);
	std::cout << maxfbits << std::endl;
	std::cout << "max float: " << fvalue << std::endl;
	fvalue = nan("");
	longRepresentation = 0;
	std::memcpy(&longRepresentation, &fvalue, sizeof(fvalue));
	std::bitset<32> nanfbits(longRepresentation);
	std::cout << nanfbits << std::endl;
	std::cout << "NaN float: " << fvalue << std::endl;
	fvalue = std::numeric_limits<float>::min();
	longRepresentation = 0;
	std::memcpy(&longRepresentation, &fvalue, sizeof(fvalue));
	std::bitset<32> minfbits(longRepresentation);
	std::cout << minfbits << std::endl;
	std::cout << "min float: " << fvalue << std::endl;

	double dvalue = std::numeric_limits<double>::max();
	unsigned long longRepresentationd = 0;
	std::memcpy(&longRepresentationd, &dvalue, sizeof(dvalue));
	std::bitset<64> maxdbits(longRepresentationd);
	std::cout << maxdbits << std::endl;
	std::cout << "max double: " << dvalue << std::endl;
	dvalue = nan("");
	longRepresentationd = 0;
	std::memcpy(&longRepresentationd, &dvalue, sizeof(dvalue));
	std::bitset<64> nandbits(longRepresentationd);
	std::cout << nandbits << std::endl;
	std::cout << "NaN double: " << dvalue << std::endl;
	dvalue = std::numeric_limits<double>::min();
	longRepresentationd = 0;
	std::memcpy(&longRepresentationd, &dvalue, sizeof(dvalue));
	std::bitset<64> mindbits(longRepresentationd);
	std::cout << mindbits << std::endl;
	std::cout << "min double: " << dvalue << std::endl;
	
	int ivalue = std::numeric_limits<int>::max();
	unsigned int longRepresentationi = 0;
	std::memcpy(&longRepresentationi, &ivalue, sizeof(ivalue));
	std::bitset<32> maxibits(longRepresentationi);
	std::cout << maxibits << std::endl;
	std::cout << "max int: " << ivalue << std::endl;
	ivalue = std::numeric_limits<int>::min();
	longRepresentationi = 0;
	std::memcpy(&longRepresentationi, &ivalue, sizeof(ivalue));
	std::bitset<32> minibits(longRepresentationi);
	std::cout << minibits << std::endl;
	std::cout << "min int: " << ivalue << std::endl;
	
	
	
	
	int test;
	std::string input = "-21474836489999";
	std::stringstream ss(input);
			ss >> test;
	std::cout << "test: " << test << std::endl;

	if (argc != 2)
	{
		std::cout << "Please use: ./convert [input]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}