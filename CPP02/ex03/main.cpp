/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:24 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 11:32:25 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

int main( void )
{
	Point a(Fixed(1), Fixed(1));
	Point b(Fixed(1), Fixed(4));
	Point c(Fixed(4), Fixed(1));
	Point toCheck(Fixed(10.0f), Fixed(2.0f));

	if (bsp(a, b, c, toCheck))
		std::cout << "Point is inside" << std::endl;
	else
		std::cout << "Point is outside" << std::endl;
	
	return 0;
}