/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:14:45 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 13:38:33 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
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

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "pA" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "pB" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "pC" << std::endl;
	else
		std::cout << "pSomething else" << std::endl;
}

void identify(Base &p)
{
	bool found = false;
	try 
	{
		A &test = dynamic_cast<A &>(p);
		std::cout << "rA" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::exception &bc)
	{
	}
	try
	{
		B &test = dynamic_cast<B &>(p);
		std::cout << "rB" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::exception &bc)
	{
	}
	try
	{
		C &test = dynamic_cast<C &>(p);
		std::cout << "rC" << std::endl;
		found = true;
		(void)test;
	}
	catch(const std::exception &bc)
	{
	}
	if (!found)
		std::cout << "rSomething else" << std::endl;
}


int main(void)
{
	Base *base = new Base();
	Base *random = generate();
	identify(*random);
	identify(random);
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();
	identify(a);
	identify(*a);
	identify(b);
	identify(*b);
	identify(c);
	identify(*c);
	identify(NULL);
	identify(base);
	identify(*base);
	delete random;
	delete base;
	delete a;
	delete b;
	delete c;
}