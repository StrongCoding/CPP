/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:15:48 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 10:24:54 by dnebatz          ###   ########.fr       */
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
	int	i;
	std::string	input;
	std::string	new_number;
	std::string	new_surname;
	std::string	new_lastname;
	std::string	new_nickname;
	std::string	new_darkest_secret;
	
	i = 0;
	while (i < 5)
	{
		if (i == 0)
			std::cout << "please enter number: ";
		else if (i == 1)
			std::cout << "please enter surname: ";
		else if (i == 2)
			std::cout << "please enter lastname: ";
		else if (i == 3)
			std::cout << "please enter nickname: ";
		else if (i == 4)
			std::cout << "please enter darkest secret: ";
		std::cin >> input;
		if(i == 0)
			{
				if (isNumber(input))
				{
					new_number = input;
					i++;
				}
				else
					std::cout << "invalid input: please only numbers" << std::endl;
			}
		else
			if (isAscii(input))
				{
					if (i == 1)
						new_surname = input;
					else if (i == 2)
						new_lastname = input;
					else if (i == 3)
						new_nickname = input;
					else if (i == 4)
						new_darkest_secret = input;
					i++;
				}
				else
					std::cout << "invalid input: please only ascii" << std::endl;
	}
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
