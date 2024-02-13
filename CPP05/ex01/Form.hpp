/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:06:07 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 17:39:52 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string		m_name;
		bool			m_signed;
		unsigned int	m_neededGradeSign;
		unsigned int	m_neededGradeExecute;

	public:
		Form();
		Form(std::string name);
		Form(std::string name, unsigned int new_neededGradeSign, unsigned int new_neededGradeExecute);
		~Form();
		Form(Form &other);
		Form &operator =(Form &source);
		const std::string getName(void);
		unsigned int getNeededGradeSign(void);
		unsigned int getNeededGradeExecute(void);
		bool getSigned(void);
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

std::ostream& operator<<(std::ostream& os, Form& source);


#endif