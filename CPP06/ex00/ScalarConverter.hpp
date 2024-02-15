/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:03:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/15 17:12:26 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		ScalarConverter &operator =(ScalarConverter &source);

	public:
		~ScalarConverter();
		static void convert(std::string input);
		static unsigned int	isNumber(std::string str);
		static std::string checkType(std::string input);
		static unsigned int	countDots(std::string str);
		static void	convertChar(std::string str);
		static void	convertInt(std::string str);
		static void	convertFloat(std::string str);
		static void	convertDouble(std::string str);
		static void	printCrap(void);
		static void printChar(char c);
};

#endif