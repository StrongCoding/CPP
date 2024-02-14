/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:41:48 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 09:35:29 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	private:
		std::string m_availableForms[3];
		AForm* (Intern::*m_formFunctions[3])(std::string target);

	public:
		Intern();
		~Intern();
		Intern(Intern &other);
		Intern &operator =(Intern &source);
		AForm *makeForm(std::string form, std::string target);
		AForm *makeSCF(std::string target);
		AForm *makeRRF(std::string target);
		AForm *makePPF(std::string target);
};

#endif