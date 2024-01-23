/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 10:29:48 by dnebatz          ###   ########.fr       */
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

bool Fixed::operator >(const Fixed &source) const
{
	if (this->m_value_number > source.m_value_number)
		return (true);
	return (false);
}

bool Fixed::operator <(const Fixed &source) const
{
	if (this->m_value_number < source.m_value_number)
		return (true);
	return (false);
}

bool Fixed::operator >=(const Fixed &source) const
{
	if (this->m_value_number >= source.m_value_number)
		return (true);
	return (false);
}

bool Fixed::operator <=(const Fixed &source) const
{
	if (this->m_value_number <= source.m_value_number)
		return (true);
	return (false);
}

bool Fixed::operator ==(const Fixed &source) const
{
	if (this->m_value_number == source.m_value_number)
		return (true);
	return (false);
}

bool Fixed::operator !=(const Fixed &source) const
{
	if (this->m_value_number != source.m_value_number)
		return (true);
	return (false);
}

float Fixed::operator +(float value)
{
	return (toFloat() + value);
}

int Fixed::operator +(int value)
{
	return (toInt() + value);
}

Fixed Fixed::operator +(Fixed value)
{
	return (Fixed(toFloat() + value.toFloat()));
}

float Fixed::operator -(float value)
{
	return (toFloat() - value);
}

int Fixed::operator -(int value)
{
	return (toInt() - value);
}

Fixed Fixed::operator -(Fixed value)
{
	return (Fixed(toFloat() - value.toFloat()));
}

float Fixed::operator *(float value)
{
	return (toFloat() * value);
}

int Fixed::operator *(int value)
{
	return (toInt() * value);
}

Fixed Fixed::operator *(Fixed value)
{
	return (Fixed(toFloat() * value.toFloat()));
}

float Fixed::operator /(float value)
{
	return (toFloat() / value);
}

int Fixed::operator /(int value)
{
	return (toInt() / value);
}

Fixed Fixed::operator /(Fixed value)
{
	return (Fixed(toFloat() / value.toFloat()));
}

Fixed &Fixed::operator ++(void)
{
	m_value_number++;
	return (*this);
}

Fixed &Fixed::operator --(void)
{
	m_value_number--;
	return (*this);
}

Fixed Fixed::operator ++(int)
{
	Fixed tmp = *this;
	m_value_number++;
	return (tmp);
}

Fixed &Fixed::operator --(int)
{
	m_value_number--;
	return (*this);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}