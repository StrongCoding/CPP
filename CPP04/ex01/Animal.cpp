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

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : m_type(type)
{
	std::cout << "animal constructor with type" << std::endl;
}

Animal::~Animal()
{
	std::cout << "animal default deconstructor" << std::endl;
}

Animal &Animal::operator=(const Animal &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
	}
	std::cout << "overloaded copy assignment operator called" << std::endl;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "i dont make sounds" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "default copy constructor called" << std::endl;
	*this = copy;
}

std::string Animal::getType(void) const
{
	return (m_type);
}
