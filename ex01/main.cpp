/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 09:35:16 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	pb;
	std::string	input;

	while (1)
	{
		std::cout << "This is the AWESOME phonebook!" << std::endl;
		std::cout << "please enter ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
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
