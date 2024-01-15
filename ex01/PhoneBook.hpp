/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:44:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 17:28:35 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
class PhoneBook
{
private:
	Contact	contacts[8];

public:
	PhoneBook(void);
	~PhoneBook();
	std::string	search(std::string query);
	bool add(std::string number, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret)
};

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor PhoneBook" << std::endl;
}

std::string	PhoneBook::search(std::string query)
{
	return ("");
}

bool PhoneBook::add(std::string number, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret)
{
	
	return (true);
}

#endif