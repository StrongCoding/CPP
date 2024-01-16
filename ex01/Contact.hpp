/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:08:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/16 11:01:10 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	int			m_contact_index;
	std::string	m_phonenumber;
	std::string	m_surname;
	std::string	m_lastname;
	std::string	m_nickname;
	std::string	m_darkest_secret;

public:
	std::string	GetNumber(void);
	void		SetNumber(std::string new_phonenumber);
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
	Contact(int contact_index, std::string phonenumber, std::string surname, std::string lastname, std::string nickname, std::string darkest_secret);
	~Contact();
};

#endif