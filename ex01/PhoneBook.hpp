/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:44:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 09:34:47 by dnebatz          ###   ########.fr       */
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
	bool	add(void);
};

#endif