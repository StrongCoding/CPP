/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:53:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 09:09:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default deconstructor" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain &source)
{
	std::cout << "Brain overloaded assignment operator" << std::endl;
	if (this != &source)
	{
		std::copy(source.m_ideas, source.m_ideas + 100, m_ideas);
	}
	return (*this);
}
