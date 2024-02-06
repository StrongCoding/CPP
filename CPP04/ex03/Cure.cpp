/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:04:55 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:16:42 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "im default constructor of Cure" << std::endl;
}

Cure::~Cure()
{
	std::cout << "im default deconstructor of Cure" << std::endl;
}

Cure::Cure(Cure &copy)
{
	std::cout << "im default copy constructor of Cure" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(Cure &source)
{
	std::cout << "im overloaded assignment operator of Cure" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}
