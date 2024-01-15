/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:08:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 17:33:49 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
private:
	int			index;
	std::string	number;
	std::string	surname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkest_secret;

public:
	std::string	GetNumber(void);
	void		SetNumber(std::string new_number);
	std::string	GetSurname(void);
	void		SetSurname(std::string new_surname);
	std::string	GetLastname(void);
	void		SetLastname(std::string new_lastname);
	std::string	GetNickname(void);
	void		SetNickname(std::string new_nickname);
	std::string	GetDarkestSecret(void);
	void		SetDarkestSecret(std::string new_darkest_secret);
	void		SetIndex(int new_index);
	int			GetIndex(void);
	Contact(void);
	~Contact();
};

Contact::Contact(void)
{
	std::cout << "Constructor Contacts" << std::endl;
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

#endif