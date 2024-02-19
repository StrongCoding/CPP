/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:16 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 20:08:20 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

Iter::Iter() : m_type("default")
{
	
}

Iter::Iter(std::string type) : m_type(type)
{
	
}

Iter::~Iter()
{
	
}

Iter::Iter(Iter const &other) : m_type(other.m_type)
{
	*this = other;
}

Iter &Iter::operator=(Iter const &other)
{
	if (this != &other)
	{
		
	}
	return *this;
}

std::string Iter::getType() const
{
	return (m_type);
}