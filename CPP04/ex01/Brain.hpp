/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:54:06 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 09:05:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain 
{
	private:
		std::string m_ideas[100];

	public:
		Brain();
		~Brain();
		Brain(Brain &copy);
		Brain &operator =(Brain &source);
};

#endif