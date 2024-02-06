/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:11 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 16:31:45 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
	private:
		using FragTrap::m_hitPoints;
		using ScavTrap::m_energyPoints;
		using FragTrap::m_attackDamage;
		
	public:
		std::string m_name;
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator =(const DiamondTrap &source);
		using ScavTrap::attack;
		void whoAmI(void);
};

#endif