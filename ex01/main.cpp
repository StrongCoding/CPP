/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 20:28:26 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

#include <iostream>

int	main(void)
{
	PhoneBook	pb;
	std::string	input;
	std::cout << "enter input" << std::endl;
	std::cin >> input;
	pb.add("123", "daniel", "nebatz", "dhigh", "you");
	pb.search();
	std::cout << "exiting" << std::endl;
}
