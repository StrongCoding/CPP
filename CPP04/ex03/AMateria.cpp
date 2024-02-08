/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:47:49 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/08 15:57:13 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : m_type(type)
{
	
}

AMateria::AMateria()
{
	std::cout << "im default constructor of AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "im default deconstructor of AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "im default copy constructor of AMateria" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	std::cout << "im overloaded assignment operator of AMateria" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (m_type);
}
