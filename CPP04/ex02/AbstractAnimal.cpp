/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:53:23 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 06:53:14 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */    

#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal()
{
	std::cout << "AbstractAnimal default constructor" << std::endl;
}

AbstractAnimal::AbstractAnimal(std::string type) : m_type(type)
{
	std::cout << "AbstractAnimal constructor with type" << std::endl;
}

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "AbstractAnimal default deconstructor" << std::endl;
}

AbstractAnimal &AbstractAnimal::operator=(const AbstractAnimal &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
	}
	std::cout << "overloaded copy assignment operator called" << std::endl;
	return (*this);
}

void AbstractAnimal::makeSound(void) const
{
	std::cout << "i dont make sounds" << std::endl;
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal &copy)
{
	std::cout << "default copy constructor called" << std::endl;
	*this = copy;
}

std::string AbstractAnimal::getType(void) const
{
	return (m_type);
}
