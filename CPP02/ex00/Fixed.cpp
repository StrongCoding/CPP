/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 18:12:22 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_value_number = 0;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_value_number);
}

void Fixed::setRawBits(int const raw)
{
	m_value_number = raw;
}

Fixed &Fixed::operator =(const Fixed &source)
{
	if(this != &source)
		this->m_value_number = source.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
