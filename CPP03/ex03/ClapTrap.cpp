/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:11:06 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 17:03:24 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: m_hitPoints(100)
	, m_energyPoints(10)
	, m_attackDamage(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: m_name(name)
	, m_hitPoints(10)
	, m_energyPoints(10)
	, m_attackDamage(0)
{
	std::cout << "default constructor with name called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "default deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "default copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	if(this != &source)
	{
		m_name = source.m_name;
		m_hitPoints = source.m_hitPoints;
		m_energyPoints = source.m_energyPoints;
		m_attackDamage = source.m_attackDamage;
	}
	std::cout << "overloaded copy assignment operator called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (m_hitPoints < 1 )
		std::cout << "ClapTrap " << m_name << " is dead so no attacking!" << std::endl;
	else if (m_energyPoints > 1)
	{
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
		m_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << m_name << " tries to attack but is out od energy points" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " takes  " << amount << " dmg!" << std::endl;
	m_hitPoints -= amount;
	if (m_hitPoints < 1 )
		std::cout << "ClapTrap " << m_name << " died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoints < 1 )
		std::cout << "ClapTrap " << m_name << " is dead so no repairing!" << std::endl;
	else if (m_energyPoints > 1)
	{
		m_hitPoints += amount;
		m_energyPoints--;
		std::cout << "ClapTrap " << m_name << " repairs itself and restored " << amount << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << m_name << " tries to repairs itself but is out of energy points" << std::endl;
}
