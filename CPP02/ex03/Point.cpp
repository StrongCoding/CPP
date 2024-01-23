/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:47:25 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 10:09:37 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::Point(const Point &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Point::Point(const Fixed x, const Fixed y) : m_x(x), m_y(y)
{
}

Point &Point::operator=(const Point &source)
{
	if (this != &source)
	{

	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return m_x;
}

Fixed Point::getY(void) const
{
	return m_y;
}
