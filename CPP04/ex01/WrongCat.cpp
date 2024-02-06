/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:09:33 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 21:34:13 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	m_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default deconstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "WrongCat default copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator =(const WrongCat &source)
{
	if (this != &source)
		m_type = source.m_type;
	std::cout << "WrongCat assignment overload called" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "meooowwwwwwww" << std::endl;
}