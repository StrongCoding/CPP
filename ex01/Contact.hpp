/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:08:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/15 09:06:28 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
private:
	

public:
	int	count;
	Contact(void);
	~Contact();
};

Contact::Contact(void)
{
	std::cout << "Constructor" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor" << std::endl;
}


#endif