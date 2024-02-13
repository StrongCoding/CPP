/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:45:00 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 20:45:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	m_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm &operator =(PresidentialPardonForm &source);
		void action(void) const;
};

#endif