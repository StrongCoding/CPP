/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:19:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/20 18:44:50 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Test.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\033[1;33m Array<int> a(7); \033[0m" << std::endl;
	Array<int> a(7);

	std::cout << "a[6]: " << a[6] << std::endl;
	try
	{
		a[6] = 7;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		a[7] = 7;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "a[6]: " << a[6] << std::endl << std::endl;
	std::cout << "\033[1;33m Test b(\"Fries\"); \033[0m" << std::endl;
	std::cout << "\033[1;33m Array<Test> c(3); \033[0m" << std::endl;
	Test b("Fries");
	Array<Test> c(3);

	std::cout << "b.getType: " << b.getType() << std::endl;
	std::cout << "c[2]: " << c[2].getType() << std::endl;
	try
	{
		c[2] = b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c[7] = b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "c[2]: " << c[2].getType() << std::endl;
	std::cout << "\033[1;33m Empty array: Array<int> d;\033[0m" << std::endl;
	Array<int> d;
	std::cout << "size d: " << d.size() << std::endl;
}