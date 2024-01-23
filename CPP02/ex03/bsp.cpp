/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:41:52 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 10:10:58 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "a_x: " << a.getX().toFloat() << "a_y: " << a.getY().toFloat() << std::endl;
	float big_triangle = ((b.getY().toFloat() - c.getY().toFloat()) * (a.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()));
	float first_triangle = ((b.getY().toFloat() - c.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat())) / big_triangle;
	float second_triangle = ((c.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat()) + (a.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat())) / big_triangle;
	float third_triangle = 1 - first_triangle - second_triangle;
	std::cout << "big_triangle: " << big_triangle << std::endl;
	std::cout << "first_triangle: " << first_triangle << std::endl;
	std::cout << "second_triangle: " << second_triangle << std::endl;
	std::cout << "third_triangle: " << third_triangle << std::endl;
	if (first_triangle >= 0 && second_triangle >= 0 && third_triangle >= 0)
		return (true);
	return (false);
}
