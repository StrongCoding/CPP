/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:31 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 17:37:32 by dnebatz          ###   ########.fr       */
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
	if (grade > 150)
		throw Bureaucrat::GradeToLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeToHighException();
	else
		m_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : m_name(copy.m_name)
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

const std::string Bureaucrat::getName(void) const
{
	return (m_name);
}

unsigned int Bureaucrat::getGrade(void) const
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

void Bureaucrat::signForm(AForm &form)
{
	if (form.getNeededGradeSign() >= m_grade)
	{
		form.beSigned(*this);
		std::cout << m_name << " signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << m_name << " couldn't sign " << form.getName() << " because grade is too low." << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	if (form.getSigned() == true && form.getNeededGradeExecute() >= m_grade)
	{
		form.execute(*this);
		std::cout << m_name << " executed " << form.getName() << std::endl;
	}
	else
	{
		if (form.getSigned() == false)
			std::cout << m_name << " couldn't execute " << form.getName() << " because form is not signed." << std::endl;
		else
			std::cout << m_name << " couldn't execute " << form.getName() << " because grade is too low." << std::endl;
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
