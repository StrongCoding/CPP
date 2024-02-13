/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:10 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 17:40:15 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : m_name("default"), m_signed(false), m_neededGradeSign(150), m_neededGradeExecute(150)
{
}


AForm::AForm(std::string name): m_name(name), m_signed(false), m_neededGradeSign(150), m_neededGradeExecute(150)
{
}

AForm::AForm(std::string name, unsigned int new_neededGradeSign, unsigned int new_neededGradeExecute) : m_name(name), m_signed(false), m_neededGradeSign(new_neededGradeSign), m_neededGradeExecute(new_neededGradeExecute)
{
	try
	{
		if (new_neededGradeSign > 150 || new_neededGradeExecute > 150)
			throw AForm::GradeToLowException();
		else if (new_neededGradeSign < 1 || new_neededGradeExecute < 1)
			throw AForm::GradeToHighException();
		else
		{
			m_neededGradeSign = new_neededGradeSign;
			m_neededGradeExecute = new_neededGradeExecute;
		}
	}
	catch(const AForm::GradeToLowException &exception)
	{
		std::cout << exception.what() << std::endl;
		m_neededGradeSign = 150;
		m_neededGradeExecute = 150;
	}
	catch(const AForm::GradeToHighException &exception)
	{
		std::cout << exception.what() << std::endl;
		m_neededGradeSign = 150;
		m_neededGradeExecute = 150;
	}
}

AForm::~AForm()
{
}

AForm::AForm(AForm &copy)
{
	*this = copy;
}

AForm &AForm::operator=(AForm &source)
{
	if (this != &source)
	{
		m_signed = source.m_signed;
		m_neededGradeSign = source.m_neededGradeSign;
		m_neededGradeExecute = source.m_neededGradeExecute;
	}
	return (*this);
}

const std::string AForm::getName(void) const
{
	return (m_name);
}

unsigned int AForm::getNeededGradeSign(void) const
{
	return (m_neededGradeSign);
}

unsigned int AForm::getNeededGradeExecute(void) const
{
	return (m_neededGradeExecute);
}

bool AForm::getSigned(void) const
{
	return (m_signed);
}

void AForm::execute(Bureaucrat const &bureaucrat) const
{
	try
	{
		if (!m_signed)
			std::cout << "Form needs to be signed!" << std::endl;
		else if (bureaucrat.getGrade() <= m_neededGradeExecute)
			action();
		else
			throw AForm::GradeToLowException();
	}
	catch(const AForm::GradeToLowException& exception)
	{
		std::cout << exception.what() << std::endl;
	}
	
	
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	try{
		if (bureaucrat.getGrade() <= m_neededGradeSign)
			m_signed = true;
		else
			throw AForm::GradeToLowException();
	}
	catch(const AForm::GradeToLowException& exception)
	{
		std::cout << exception.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &resultstream, AForm &source)
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


const char *AForm::GradeToHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char *AForm::GradeToLowException::what() const throw()
{
	return ("Error: grade too low!");
}
