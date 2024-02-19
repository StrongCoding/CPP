/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:56:57 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 20:09:02 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

void printInt(int const &a)
{
	std::cout << a << std::endl;
}

void printChar(char const &a)
{
	std::cout << a << std::endl;
}

void printArray(Iter const &a)
{
	std::cout << a.getType() << std::endl;
}

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	iter(a, 5, printInt);

	char b[] = {'+', '-', '*', '/', 'k'};
	iter(b, 5, printChar);

	Iter c[] = {Iter("int"), Iter("char"), Iter("float"), Iter("double"), Iter("string")};
	iter(c, 5, printArray);
}
