/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:17:54 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 16:54:33 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
// int main(void)
// {
// 	int i = max(7, 9);
// 	std::cout << "i: " << i << std::endl;
// 	float f = max(99.01f, 99.02f);
// 	std::cout << "f: " << f << std::endl;
// 	double d = max(42., 41.);
// 	std::cout << "d: " << d << std::endl;
// 	int i2 = min(7, 9);
// 	std::cout << "i2: " << i2 << std::endl;
// 	float f2 = min(99.01f, 99.02f);
// 	std::cout << "f2: " << f2 << std::endl;
// 	double d2 = min(42., 41.);
// 	std::cout << "d2: " << d2 << std::endl;
// 	int one = 1;
// 	int two = 2;
// 	swap(one, two);
// 	std::cout << "one: " << one << std::endl;
// 	std::cout << "two: " << two << std::endl;
// 	float fone = 1;
// 	float ftwo = 2;
// 	swap(fone, ftwo);
// 	std::cout << "fone: " << fone << std::endl;
// 	std::cout << "ftwo: " << ftwo << std::endl;
// }