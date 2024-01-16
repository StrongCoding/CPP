/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:08:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 10:34:10 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iomanip>
# include <iostream>

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
	Contact();
	Contact(int index, std::string	number, std::string	surname, std::string lastname, std::string nickname, std::string darkest_secret);
	~Contact();
};

#endif