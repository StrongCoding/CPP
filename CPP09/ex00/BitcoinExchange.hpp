/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:53:42 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/18 18:16:50 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		bool	checkValue(std::string line);
		bool	checkDate(std::string line);
	
	public:
		BitcoinExchange(std::string inputFile);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
};