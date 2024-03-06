/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:33:55 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/05 20:12:34 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"


Contact::Contact()
{

}

Contact::Contact(int contact_index, std::string phonenumber, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret)
	: m_contact_index(contact_index)
	, m_phonenumber(phonenumber)
	, m_surname(surname)
	, m_lastname(lastname)
	, m_nickname(nickname)
	, m_darkest_secret(darkest_secret)
{

}

Contact::~Contact()
{

}

void	Contact::SetIndex(int new_index)
{
	this->m_contact_index = new_index;
}

int	Contact::GetIndex(void)
{
	return (this->m_contact_index);
}

std::string	Contact::GetNumber(void)
{
	return (this->m_phonenumber);
}

void	Contact::SetNumber(std::string new_number)
{
	this->m_phonenumber = new_number;
}

std::string	Contact::GetSurname(void)
{
	return (this->m_surname);
}

void	Contact::SetSurname(std::string new_surname)
{
	this->m_surname = new_surname;
}

std::string	Contact::GetLastname(void)
{
	return (this->m_lastname);
}

void	Contact::SetLastname(std::string new_lastname)
{
	this->m_lastname = new_lastname;
}

std::string	Contact::GetNickname(void)
{
	return (this->m_nickname);
}

void	Contact::SetNickname(std::string new_nickname)
{
	this->m_nickname = new_nickname;
}

std::string	Contact::GetDarkestSecret(void)
{
	return (this->m_darkest_secret);
}

void	Contact::SetDarkestSecret(std::string new_darkest_secret)
{
	this->m_darkest_secret = new_darkest_secret;
}
