/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:09:33 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 21:34:00 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	m_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default deconstructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "Cat default copy constructor called" << std::endl;
}

Cat &Cat::operator =(const Cat &source)
{
	if (this != &source)
		m_type = source.m_type;
	std::cout << "Cat assignment overload called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "meooowwwwwwww" << std::endl;
}