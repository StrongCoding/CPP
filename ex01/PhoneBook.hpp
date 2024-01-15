/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:44:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 08:56:21 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
private:
	

public:
	int	count;
	PhoneBook(void);
	~PhoneBook();
};

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Deconstructor" << std::endl;
}

#endif