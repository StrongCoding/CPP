/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:45:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:59:27 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator =(const ScavTrap &source);
		~ScavTrap();
		void guardGate();
};

#endif