/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:42:25 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:52:39 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap &copy);
		FragTrap &operator =(FragTrap &source);
		void highFivesGuys(void);
};

#endif