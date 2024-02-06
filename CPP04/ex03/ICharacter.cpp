/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:04:59 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:15:54 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "im default constructor of ICharacter" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "im default deconstructor of ICharacter" << std::endl;
}

ICharacter::ICharacter(ICharacter &copy)
{
	std::cout << "im default copy constructor of ICharacter" << std::endl;
	*this = copy;
}

ICharacter &ICharacter::operator=(ICharacter &source)
{
	std::cout << "im overloaded assignment operator of ICharacter" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}
