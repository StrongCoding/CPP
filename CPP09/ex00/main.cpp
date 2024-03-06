/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:04:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/06 09:59:32 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>

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
		fileContent = readFile.str();
		readDatabasefile << databasefile.rdbuf();
		databasefileContent = readDatabasefile.str();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
		return (1);
	}
	return (0);
}
