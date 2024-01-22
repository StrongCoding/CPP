/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:41:52 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 20:53:24 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a.getX().toFloat() == b.getX().toFloat() && point.getY().toFloat() == c.getY().toFloat())
		return (false);
	return (false);
}
