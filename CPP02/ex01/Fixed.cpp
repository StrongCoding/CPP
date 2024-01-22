/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 18:20:03 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_value_number = 0;
}

Fixed::Fixed(const int value)
{
	m_value_number = value << m_bits;
}

Fixed::Fixed(const float value)
{
	m_value_number = value * (1 << m_bits);
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

std::ostream &operator <<(std::ostream &outputstream, const Fixed &fixed)
{
	outputstream << fixed.toFloat();
	return (outputstream);
}
float Fixed::toFloat(void) const
{
	return(static_cast<float>(m_value_number) / static_cast<float>(1 << m_bits));
}

int Fixed::toInt(void) const
{
	return m_value_number >> m_bits;
}
