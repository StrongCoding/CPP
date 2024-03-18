/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:53:42 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/18 20:45:51 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <cctype>
#include <map>
#include <algorithm>

class BitcoinExchange
{
	private:
		std::map<std::string, double> m_dataMap;
		BitcoinExchange();
		bool	checkValue(std::string line);
		bool	checkDate(std::string line);
		bool	checkValueDatabase(std::string line);
		bool	checkDateDatabase(std::string line);
		bool	checkLineDatabase(std::string line, int currentLine);
		std::string removeWhitespace(const std::string& str);
		bool	checkLine(std::string line, int currentLine);
		unsigned int	countDots(std::string str);
		bool 	isLeapYear(int year);
		bool	isNumber(std::string str);
	
	public:
		BitcoinExchange(std::string inputFileName);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
};