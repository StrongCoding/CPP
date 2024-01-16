/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:33:55 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 10:40:01 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


Contact::Contact()
{
	std::cout << "default Constructor Contacts" << std::endl;
}

Contact::Contact(int index, std::string	number, std::string	surname, std::string lastname, std::string nickname, std::string darkest_secret) : index(index), number(number), surname(surname), lastname(lastname), nickname(nickname), darkest_secret(darkest_secret)
{
	std::cout << "init Constructor Contacts" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor Contacts" << std::endl;
}

void	Contact::SetIndex(int new_index)
{
	this->index = new_index;
}

int	Contact::GetIndex(void)
{
	return (this->index);
}

std::string	Contact::GetNumber(void)
{
	return (this->number);
}

void	Contact::SetNumber(std::string new_number)
{
	this->number = new_number;
}

std::string	Contact::GetSurname(void)
{
	return (this->surname);
}

void	Contact::SetSurname(std::string new_surname)
{
	this->surname = new_surname;
}

std::string	Contact::GetLastname(void)
{
	return (this->lastname);
}

void	Contact::SetLastname(std::string new_lastname)
{
	this->lastname = new_lastname;
}

std::string	Contact::GetNickname(void)
{
	return (this->nickname);
}

void	Contact::SetNickname(std::string new_nickname)
{
	this->nickname = new_nickname;
}

std::string	Contact::GetDarkestSecret(void)
{
	return (this->darkest_secret);
}

void	Contact::SetDarkestSecret(std::string new_darkest_secret)
{
	this->darkest_secret = new_darkest_secret;
}
