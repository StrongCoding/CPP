/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:01:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/02 11:01:11 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	m_type = "Dog";
	m_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog &Dog::operator =(const Dog &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
	}
	std::cout << "Dog overloaded copy assignment operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

void Dog::makeSound(void) const
{
	std::cout << "woaf woaf" << std::endl;
}