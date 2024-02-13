/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 11:10:52 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <sstream>

class Bureaucrat 
{
	private:
		const std::string	m_name;
		unsigned int		m_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, unsigned int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator =(Bureaucrat &source);
		const std::string getName(void);
		unsigned int getGrade(void);
		void decrementGrade(void);
		void incrementGrade(void);
		void leckmich(void);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& source);

#endif