/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:04:57 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/07 20:30:20 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	m_type = "ice";
	std::cout << "im default constructor of Ice" << std::endl;
}

Ice::~Ice()
{
	std::cout << "im default deconstructor of Ice" << std::endl;
}

Ice::Ice(Ice &copy)
{
	std::cout << "im default copy constructor of Ice" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(Ice &source)
{
	std::cout << "im overloaded assignment operator of Ice" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice;
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}