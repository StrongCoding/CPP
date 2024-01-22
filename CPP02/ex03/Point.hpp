/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:39:30 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 20:42:19 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>

class Point
{
	private:
		float	m_x;
		float	m_y;

	public:
		Point();
		Point(const Point &copy);
		Point(const float x, const float y);
		Point &operator =(const Point &source);
		~Point();

		float	getX(void) const;
		float	getY(void) const;
};

#endif