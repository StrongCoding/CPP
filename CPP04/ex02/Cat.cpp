/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:09:33 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/08 15:00:02 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	m_type = "Cat";
	m_brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << "Cat default deconstructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	m_brain = new Brain;
	m_type = copy.m_type;
	*this = copy;
	std::cout << "Cat default copy constructor called" << std::endl;
}

Cat &Cat::operator =(const Cat &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
		m_brain = source.m_brain;
	}
	std::cout << "Cat assignment overload called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "meooowwwwwwww" << std::endl;
}