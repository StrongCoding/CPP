/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:44:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 20:26:45 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
class PhoneBook
{
private:
	Contact	contacts[8];
	int		count;

public:
	PhoneBook(void);
	~PhoneBook();
	void	search(void);
	void	print_contact(int index);
	bool	add(std::string number, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret);
};

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
	std::string	str;

	i = -1;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (++i < this->count)
	{
		std::cout << i << "|";
		std::cout << this->contacts[i].GetSurname().length() << "|";
		if (this->contacts[i].GetSurname().length() > 10)
			std::cout << this->contacts[i].GetSurname().substr(0, 9) << ".";
		else
			{
				str = this->contacts[i].GetSurname();
				str.resize(10, ' ');
				std::cout << str;
			}
			
		// else
		// 	std::cout << this->contacts[i].GetSurname().resize(10);
		std::cout << "|";
		if (this->contacts[i].GetLastname().length() > 10)
			std::cout << this->contacts[i].GetLastname().substr(0, 9) << ".";
		// else
		// 	std::cout << this->contacts[i].GetLastname().resize(10);
		std::cout << "|";
		if (this->contacts[i].GetNickname().length() > 10)
			std::cout << this->contacts[i].GetNickname().substr(0, 9) << ".";
		// else
		// 	std::cout << this->contacts[i].GetNickname().resize(10);
		std::cout << std::endl;
	}
	return ;
}

bool PhoneBook::add(std::string number, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret)
{
	contacts[this->count] = Contact(this->count, number, surname, lastname, nickname, darkest_secret);
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
	else if (index > this->count)
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

#endif