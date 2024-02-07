/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:04:55 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/07 20:30:53 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	m_type = "cure";
	std::cout << "im default constructor of Cure" << std::endl;
}

Cure::~Cure()
{
	std::cout << "im default deconstructor of Cure" << std::endl;
}

Cure::Cure(Cure &copy)
{
	std::cout << "im default copy constructor of Cure" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(Cure &source)
{
	std::cout << "im overloaded assignment operator of Cure" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure;
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
