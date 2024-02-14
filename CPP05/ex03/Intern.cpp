#include "Intern.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:41:53 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 08:41:54 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	m_availableForms[0] = "shrubbery creation";
	m_availableForms[1] = "robotomy request";
	m_availableForms[2] = "presidential pardon";
    m_formFunctions[0] = &Intern::makeSCF;
	m_formFunctions[1] = &Intern::makeRRF;
	m_formFunctions[2] = &Intern::makePPF;
}

Intern::~Intern()
{
}

Intern::Intern(Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern &source)
{
	if (this != &source)
	{

	}
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i = -1;
	while(++i <= 3)
	{
		if (m_availableForms[i] == form)
			return ((this->*m_formFunctions[i])(target));
	}
	std::cout << "Form not found" << std::endl;
	return (NULL);
}

AForm *Intern::makeSCF(std::string target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRRF(std::string target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makePPF(std::string target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}
