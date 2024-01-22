/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:39:30 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 21:10:27 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	m_x;
		const Fixed	m_y;

	public:
		Point();
		Point(const Point &copy);
		Point(const Fixed x, const Fixed y);
		Point &operator =(const Point &source);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif