/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 17:53:39 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int	main(void)
{
	PhoneBook	pb;
	std::string	input;

	while (1)
	{
		std::cout << "This is the AWESOME phonebook!" << std::endl;
		std::cout << "please enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input, '\n');
		if (std::cin.eof())
			break;
		if (input == "ADD")
			pb.add();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "invalid input" << std::endl;
	}
}

bool	isNumber(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (false);
	return (true);
}

bool	isAscii(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isascii(str[i]))
			return (false);
	return (true);
}
