/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/25 12:10:55 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string m_name;
		using FragTrap::m_hitPoints;
		using ScavTrap::m_energyPoints;
		using FragTrap::m_attackDamage;
		// ClapTrap::m_name;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		// using ScavTrap::attack;
		void whoAmI(void);
};

#endif