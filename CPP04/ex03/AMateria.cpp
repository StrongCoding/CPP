/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:47:49 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:16:57 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "im default constructor of AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "im default deconstructor of AMateria" << std::endl;
}

AMateria::AMateria(AMateria &copy)
{
	std::cout << "im default copy constructor of AMateria" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(AMateria &source)
{
	std::cout << "im overloaded assignment operator of AMateria" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}
