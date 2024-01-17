/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:44:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 10:50:59 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact	m_contacts[8];
	int		m_count;

public:
	PhoneBook(void);
	~PhoneBook();
	void	search(void);
	void	printContact(int index);
	bool	add(void);
};

bool	isNumber(std::string str);
bool	isAscii(std::string str);

#endif