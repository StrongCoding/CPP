/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:24:30 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 19:21:59 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <iostream>

int main(void)
{
	std::srand(std::time(0));
	int count = 10000;
	Span a(count);
	int i = -1;
	try
	{
		while (++i < count)
			a.addnumber(rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int lS = a.longestSpan();
		int sS = a.shortestSpan();
		std::cout << "longestSpan: " << lS << std::endl;
		std::cout << "shortestSpan: " << sS << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::srand(std::time(0));
	count = 10;
	Span b(count);
	i = -1;
	int randomNumber;
	try
	{
		while (++i < count)
		{
			randomNumber = rand() % 100;
			b.addnumber(randomNumber);
			std::cout << "added: " << randomNumber << std::endl;
		}	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int lS = b.longestSpan();
		int sS = b.shortestSpan();
		std::cout << "longestSpan: " << lS << std::endl;
		std::cout << "shortestSpan: " << sS << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


}