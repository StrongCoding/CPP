/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:07 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 17:39:52 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string		m_name;
		bool			m_signed;
		unsigned int	m_neededGradeSign;
		unsigned int	m_neededGradeExecute;

	public:
		AForm();
		AForm(std::string name);
		AForm(std::string name, unsigned int new_neededGradeSign, unsigned int new_neededGradeExecute);
		virtual ~AForm();
		AForm(AForm &other);
		AForm &operator =(AForm &source);
		const std::string getName(void) const;
		unsigned int getNeededGradeSign(void) const;
		unsigned int getNeededGradeExecute(void) const;
		bool getSigned(void) const;
		virtual void action(void) const = 0;
		virtual void execute(Bureaucrat const &bureaucrat) const;
		void beSigned(Bureaucrat &bureaucrat);
		class GradeToHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeToLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, AForm& source);


#endif