/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:06 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/25 12:26:41 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "hitPoints: " << m_hitPoints << std::endl;
}

// DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
DiamondTrap::DiamondTrap(std::string name)
{
	m_name = name;
	FragTrap::ClapTrap::m_name = name + "_clap_name";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hi im " << m_name << " and my ClapTrap name is: " << ClapTrap::m_name << std::endl;
}

