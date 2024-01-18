/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:44:15 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/18 09:50:38 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	std::stringstream fileContent;
	std::string outputContent = "this is the output content";

	if (argc != 4)
	{
		std::cout << "please input like: ./replacer filename string1 string2" << std::endl;
		return (1);
	}
	std::ifstream inputfile(argv[1]);
	if (!inputfile.is_open())
	{
		std::cout << "cannot open input file" << std::endl;
		return (1);
	}
	std::ofstream outputfile;
	outputfile.open((std::string(argv[1]) + ".replace"), std::ios_base::app);
	if (!outputfile.is_open())
	{
		std::cout << "error outputfile" << std::endl;
		return (1);
	}
	while (std::getline(inputfile, fileContent, '\n'))
	{
		// std::cout << fileContent << std::endl;
		// outputfile << fileContent;
	}
	outputfile << fileContent;
	inputfile.close();
	outputfile.close();
	return (0);
}