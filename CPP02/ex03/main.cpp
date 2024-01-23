/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:24 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 11:49:19 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

int main( void )
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(1), Fixed(0));
	Point c(Fixed(0), Fixed(1));
	Point toCheck(Fixed(0.4f), Fixed(0.5f));

	if (bsp(a, b, c, toCheck))
		std::cout << "Point is inside" << std::endl;
	else
		std::cout << "Point is outside" << std::endl;
	
	return 0;
}