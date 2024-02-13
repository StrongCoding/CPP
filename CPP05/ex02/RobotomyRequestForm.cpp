/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:46:20 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 20:55:07 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
	
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), m_target("default target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), m_target(other.m_target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &source)
{
	if (this != &source)
	{
		AForm::operator=(source);
		m_target = source.m_target;
	}
	return *this;
}

void RobotomyRequestForm::action(void) const
{
	std::cout << "BrrrzzBrrrrrzzzzzzzzzz" << std::endl;
	if (rand() % 2)
		std::cout << m_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << m_target << " has failed to be robotomized" << std::endl;
}