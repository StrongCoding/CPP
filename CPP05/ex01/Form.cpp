/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:10 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 15:44:53 by dnebatz          ###   ########.fr       */
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
	if (new_neededGradeSign > 150 || new_neededGradeExecute > 150)
		throw Form::GradeToLowException();
	else if (new_neededGradeSign < 1 || new_neededGradeExecute < 1)
		throw Form::GradeToHighException();
}

Form::~Form()
{
}

Form::Form(Form &copy) : m_neededGradeSign(copy.m_neededGradeSign), m_neededGradeExecute(copy.m_neededGradeExecute)
{
	*this = copy;
}

Form &Form::operator=(Form &source)
{
	if (this != &source)
	{
		m_signed = source.m_signed;
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
