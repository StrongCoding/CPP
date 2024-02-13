/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:31 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 11:11:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("default"), m_grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name): m_name(name), m_grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): m_name(name)
{
	try
	{
		if (grade <= 150 && grade >= 1)
			m_grade = grade;
		else
			throw std::exception();
	}
	catch (const std::exception &e)
	{
		std::cout << "grade is out of range, was set to the lowest grade" << std::endl;
		m_grade = 150;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &source)
{
	if (this != &source)
	{
		m_grade = source.m_grade;
	}
	return (*this);
}

const std::string Bureaucrat::getName(void)
{
	return (m_name);
}

unsigned int Bureaucrat::getGrade(void)
{
	return (m_grade);
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (m_grade == 150)
			throw std::exception();
		else
			m_grade++;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: already reached maximum grade !" << std::endl;
	}
	

}

void Bureaucrat::incrementGrade(void)
{
	try
	{
		if (m_grade == 1)
			throw std::exception();
		else
			m_grade--;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: already reached maximum grade !" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &resultstream, Bureaucrat &source)
{
	return(resultstream << source.getName() << ", bureaucrat grade " << source.getGrade() << ".");
}
