/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:15:48 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 09:42:36 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->count = 0;
	std::cout << "Constructor PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor PhoneBook" << std::endl;
}

void	PhoneBook::search(void)
{
	int		i;

	i = -1;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (++i < this->count && i < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i << "|";
		if (this->contacts[i].GetSurname().length() > 10)
			std::cout << this->contacts[i].GetSurname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << this->contacts[i].GetSurname();			
		std::cout << "|";
		if (this->contacts[i].GetLastname().length() > 10)
			std::cout << this->contacts[i].GetLastname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << this->contacts[i].GetLastname();	
		std::cout << "|";
		if (this->contacts[i].GetNickname().length() > 10)
			std::cout << this->contacts[i].GetNickname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << this->contacts[i].GetNickname();	
		std::cout << "|" << std::endl;
	}
	std::cout << "please enter index of contact you want to see: ";
	std::cin >> i;
	print_contact(i);
	return ;
}

bool PhoneBook::add(void)
{
	std::string new_number;
	std::string new_surname;
	std::string new_lastname;
	std::string new_nickname;
	std::string new_darkest_secret;
	
	std::cout << "please enter number: ";
	std::cin >> new_number;
	std::cout << std::endl;
	std::cout << "please enter surname: ";
	std::cin >> new_surname;
	std::cout << std::endl;
	std::cout << "please enter lastname: ";
	std::cin >> new_lastname;
	std::cout << std::endl;
	std::cout << "please enter nickname: ";
	std::cin >> new_nickname;
	std::cout << std::endl;
	std::cout << "please enter darkest_secret: ";
	std::cin >> new_darkest_secret;
	std::cout << std::endl;
	contacts[this->count % 8] = Contact(this->count, new_number, new_surname, new_lastname, new_nickname, new_darkest_secret);
	this->count++;
	return (true);
}

void	PhoneBook::print_contact(int index)
{
	if (index < 0 || index > 7)
	{
		std::cout << "index out of range" << std::endl;
		return ;
	}
	else if (index >= this->count)
	{
		std::cout << "index not used" << std::endl;
		return ;
	}
	std::cout << "index: " << this->contacts[index].GetIndex() << std::endl;
	std::cout << "number: " << this->contacts[index].GetNumber() << std::endl;
	std::cout << "surname: " << this->contacts[index].GetSurname() << std::endl;
	std::cout << "lastname: " << this->contacts[index].GetLastname() << std::endl;
	std::cout << "nickname: " << this->contacts[index].GetNickname() << std::endl;
	std::cout << "darkest_secret: " << this->contacts[index].GetDarkestSecret() << std::endl;
}
