/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:42:12 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/24 18:52:18 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "a FragTrap is produced!" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	m_name = name;
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is gone!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Gimmeh high five my friends!!!" << std::endl;
}
