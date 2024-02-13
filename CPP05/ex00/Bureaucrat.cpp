/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:31 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 15:57:59 by dnebatz          ###   ########.fr       */
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
		if (grade > 150)
			throw Bureaucrat::GradeToLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeToHighException();
		else
			m_grade = grade;
	}
	catch(const Bureaucrat::GradeToLowException &exception)
	{
		std::cout << exception.what() << std::endl;
		m_grade = 150;
	}
	catch(const Bureaucrat::GradeToHighException &exception)
	{
		std::cout << exception.what() << std::endl;
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
			throw Bureaucrat::GradeToLowException();
		else
			m_grade++;
	}
	catch(const Bureaucrat::GradeToLowException &exception)
	{
		std::cout << exception.what() << std::endl;
	}
	

}

void Bureaucrat::incrementGrade(void)
{
	try
	{
		if (m_grade == 1)
			throw Bureaucrat::GradeToHighException();
		else
			m_grade--;
	}
	catch (const Bureaucrat::GradeToHighException &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &resultstream, Bureaucrat &source)
{
	return(resultstream << source.getName() << ", bureaucrat grade " << source.getGrade() << ".");
}

const char *Bureaucrat::GradeToHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char *Bureaucrat::GradeToLowException::what() const throw()
{
	return ("Error: grade too low!");
}
