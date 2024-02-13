/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:10 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 17:40:15 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_name("default"), m_signed(false), m_neededGradeSign(150), m_neededGradeExecute(150)
{
}


Form::Form(std::string name): m_name(name), m_signed(false), m_neededGradeSign(150), m_neededGradeExecute(150)
{
}

Form::Form(std::string name, unsigned int new_neededGradeSign, unsigned int new_neededGradeExecute) : m_name(name), m_signed(false), m_neededGradeSign(new_neededGradeSign), m_neededGradeExecute(new_neededGradeExecute)
{
	try
	{
		if (new_neededGradeSign > 150 || new_neededGradeExecute > 150)
			throw Form::GradeToLowException();
		else if (new_neededGradeSign < 1 || new_neededGradeExecute < 1)
			throw Form::GradeToHighException();
		else
		{
			m_neededGradeSign = new_neededGradeSign;
			m_neededGradeExecute = new_neededGradeExecute;
		}
	}
	catch(const Form::GradeToLowException &exception)
	{
		std::cout << exception.what() << std::endl;
		m_neededGradeSign = 150;
		m_neededGradeExecute = 150;
	}
	catch(const Form::GradeToHighException &exception)
	{
		std::cout << exception.what() << std::endl;
		m_neededGradeSign = 150;
		m_neededGradeExecute = 150;
	}
}

Form::~Form()
{
}

Form::Form(Form &copy)
{
	*this = copy;
}

Form &Form::operator=(Form &source)
{
	if (this != &source)
	{
		m_signed = source.m_signed;
		m_neededGradeSign = source.m_neededGradeSign;
		m_neededGradeExecute = source.m_neededGradeExecute;
	}
	return (*this);
}

const std::string Form::getName(void)
{
	return (m_name);
}

unsigned int Form::getNeededGradeSign(void)
{
	return (m_neededGradeSign);
}

unsigned int Form::getNeededGradeExecute(void)
{
	return (m_neededGradeExecute);
}

bool Form::getSigned(void)
{
	return (m_signed);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= m_neededGradeSign)
		m_signed = true;
	else
		throw Form::GradeToLowException();
}

std::ostream &operator<<(std::ostream &resultstream, Form &source)
{
	resultstream	<< source.getName()
					<< ", grade needed to sign "
					<< source.getNeededGradeSign()
					<< ", grade needed to execute "
					<< source.getNeededGradeExecute();
	if (source.getSigned())
		resultstream << ", is signed.";
	else
		resultstream << ", is not signed.";
	return(resultstream);
}	


const char *Form::GradeToHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char *Form::GradeToLowException::what() const throw()
{
	return ("Error: grade too low!");
}
