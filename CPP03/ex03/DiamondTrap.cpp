/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:06 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 17:55:14 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "default constructor Diamond Trap" << std::endl;
	ClapTrap::m_name = "_clap_name";
	std::cout << "hitPoints: " << m_hitPoints << std::endl;
	std::cout << "energyPoints: " << m_energyPoints << std::endl;
	std::cout << "attackDamage: " << m_attackDamage << std::endl;
}

// DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "default constructor Diamond Trap with name" << std::endl;
	m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	std::cout << "hitPoints: " << m_hitPoints << std::endl;
	std::cout << "energyPoints: " << m_energyPoints << std::endl;
	std::cout << "attackDamage: " << m_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "default deconstructor Diamond Trap with name" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hi im " << m_name << " and my ClapTrap name is: " << ClapTrap::m_name << std::endl;
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &source)
{
	if (this != &source)
	{
		m_name = source.m_name;
		m_hitPoints = source.m_hitPoints;
		m_energyPoints = source.m_energyPoints;
		m_attackDamage = source.m_attackDamage;
	}
	return (*this);
	std::cout << "assignetment operator overload of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "default copy constructor of DiamondTrap called" << std::endl;
}

