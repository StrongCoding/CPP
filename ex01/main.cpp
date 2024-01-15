/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 20:52:06 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>

int	main(void)
{
	PhoneBook	pb;
	std::string	input;
	std::cout << "enter input" << std::endl;
	std::cin >> input;
	pb.add("123", "daniel", "nebatz", "dhigh", "you");
	pb.add("423", "sarah1", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah2", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah3", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah4", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah5", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah6", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah7", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah8", "lisa", "babymausistimhaus", "me");
	pb.add("423", "sarah9", "lisa", "babymausistimhaus", "me");
	pb.search();
	std::cout << "exiting" << std::endl;
}
