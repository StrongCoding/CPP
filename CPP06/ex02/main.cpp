/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:14:45 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 10:41:10 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int main(void)
{
	Base *base = new Base();
	Base *random = base->generate();
	base->identify(*random);
	base->identify(random);
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();
	base->identify(a);
	base->identify(*a);
	base->identify(b);
	base->identify(*b);
	base->identify(c);
	base->identify(*c);
	base->identify(NULL);
	base->identify(base);
	base->identify(*base);
	delete random;
	delete base;
	delete a;
	delete b;
	delete c;
}