/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:15:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 10:40:54 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

class A;
class B;
class C;

Base::Base()
{
}

Base::Base(const Base &other)
{
	*this = other;
}

Base &Base::operator=(const Base &source)
{
	(void)source;
	return (*this);
}

Base::~Base()
{
}

Base *Base::generate(void)
{
	std::srand(std::time(0));
	int randomNumber = rand() % 3;
	if (randomNumber == 0)
		return new A();
	else if (randomNumber == 1)
		return new B();
	else
		return new C();
}

void Base::identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Something else" << std::endl;
}

void Base::identify(Base &p)
{
	bool found = false;
	try 
	{
		A &test = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
	try
	{
		B &test = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
	try
	{
		C &test = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::bad_cast &bc)
	{
	}
	if (!found)
		std::cout << "Something else" << std::endl;
}
