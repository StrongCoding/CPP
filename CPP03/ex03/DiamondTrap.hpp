/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/25 13:55:27 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		
		using FragTrap::m_hitPoints;
		using ScavTrap::m_energyPoints;
		using FragTrap::m_attackDamage;
		// ClapTrap::m_name;
		
	public:
	std::string m_name;
		DiamondTrap();
		DiamondTrap(std::string name);
		using ScavTrap::attack;
		void whoAmI(void);
};

#endif