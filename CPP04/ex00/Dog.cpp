/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:01:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/02 11:01:11 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	m_type = "Dog";
}

Dog::~Dog()
{
}

Dog &Dog::operator=(const Dog &source)
{
	if (this != &source)
	{
		m_type = source.m_type;
	}
	return (*this);
}
