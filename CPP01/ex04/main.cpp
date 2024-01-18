/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:44:15 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/18 10:24:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string	replaceStrings(std::string source, std::string stringToReplace, std::string stringNew)
{
	size_t		pos;
	size_t		stringLength;

	stringLength = source.length();
	pos = 0;
	while (pos < stringLength)
	{
		pos = source.find(stringToReplace, pos);
		if (pos == std::string::npos)
			break ;
		source.erase(pos, stringToReplace.length());
		source.insert(pos, stringNew);
		pos += stringNew.length();
	}
	return (source);
}

int main(int argc, char **argv)
{
	std::string			fileContent;
	std::stringstream	buffer;

	if (argc != 4)
	{
		std::cout << "please input like: ./replacer filename string1 string2" << std::endl;
		return (1);
	}
	if (std::string(argv[2]) == "")
	{
		std::cout << "i cannot replace and an empty string" << std::endl;
		return (1);
	}
	std::ifstream inputfile(argv[1]);
	if (!inputfile.is_open())
	{
		std::cout << "cannot open input file" << std::endl;
		return (1);
	}
	std::ofstream outputfile(std::string(argv[1]) + ".replace");
	if (!outputfile.is_open())
	{
		std::cout << "error outputfile" << std::endl;
		return (1);
	}
	buffer << inputfile.rdbuf();
	fileContent = buffer.str();
	fileContent = replaceStrings(fileContent, argv[2], argv[3]);
	outputfile << fileContent;
	inputfile.close();
	outputfile.close();
	return (0);
}