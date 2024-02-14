/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:27:15 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 20:52:30 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), m_target("default target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 145, 137), m_target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other), m_target(other.m_target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &source)
{
	if (this != &source)
	{
		AForm::operator=(source);
		m_target = source.m_target;
	}
	return *this;
}

void PresidentialPardonForm::action(void) const
{
	std::cout << "Zafod Beeblebrox: you are pardoned " << m_target << "!" << std::endl;
}
