/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:26:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 19:16:17 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : m_size(0), m_amount(0)
{
	
}

Span::Span(unsigned int size) : m_size(size), m_amount(0)
{
	
}

Span::~Span()
{
	
}

Span::Span(Span &other)
{
	*this = other;
}

Span &Span::operator=(Span &other)
{
	if (this != &other)
	{
		m_size = other.m_size;
	}
	return (*this);
}

void Span::addnumber(int number)
{
	if (m_amount < m_size)
	{
		m_vector.push_back(number);
		m_amount++;
	}
	else
		throw std::exception();
}

unsigned int Span::shortestSpan(void)
{
	std::sort(m_vector.begin(), m_vector.end());
	unsigned int i = 0;
	int span = std::numeric_limits<int>::max();
	int newSpan;
	while (i < m_amount - 1)
	{
		newSpan = m_vector.at(i + 1) - m_vector.at(i);
		if (newSpan < span)
			span = newSpan;
		i++;
	}
	return (span);
}

unsigned int Span::longestSpan(void)
{
	std::sort(m_vector.begin(), m_vector.end());
	std::cout << "amount: " << m_amount << " vector at amount: " << m_vector.at(m_amount - 1) << " vector at 0: " << m_vector.at(0) << std::endl;
	return (m_vector.at(m_amount - 1) - m_vector.at(0));
}
