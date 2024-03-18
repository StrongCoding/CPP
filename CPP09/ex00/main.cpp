/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:04:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/18 18:47:08 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::stringstream readFile;
	std::string fileContent;
	std::stringstream readDatabasefile;
	std::string databasefileContent;
	
	if (argc != 2)
	{
		std::cerr << "Please use ./btc filename." << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange a(argv[1]);
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
		return (1);
	}
}
