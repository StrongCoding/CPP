/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:53:23 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 06:53:14 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */    

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type)
{
	std::cout << "WrongAnimal constructor with type" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default deconstructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
	}
	std::cout << "overloaded copy assignment operator called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "i dont make sounds" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "default copy constructor called" << std::endl;
	*this = copy;
}

std::string WrongAnimal::getType(void) const
{
	return (m_type);
}
