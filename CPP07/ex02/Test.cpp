/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:12:16 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/20 18:38:38 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test() : m_type("default")
{

}

Test::Test(std::string type) : m_type(type)
{

}

Test::~Test()
{
	
}

Test::Test(Test const &other) : m_type(other.m_type)
{

}

Test &Test::operator=(Test const &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

std::string Test::getType() const
{
	return (m_type);
}