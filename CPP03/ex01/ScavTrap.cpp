/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:45:14 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/24 18:32:31 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name)
{
	m_name = name;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " is now in gate keeper mode!" << std::endl;
}
