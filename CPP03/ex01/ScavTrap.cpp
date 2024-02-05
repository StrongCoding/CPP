/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:45:14 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:47:39 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	std::cout << "default constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "default deconstructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	m_name = name;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	std::cout << "default constructor ScavTrap with name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "default copy constructor of ScavTrap called" << std::endl;
	*this = copy;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " is now in gate keeper mode!" << std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &source)
{
	if (this != &source)
	{
		m_name = source.m_name;
		m_hitPoints = source.m_hitPoints;
		m_energyPoints = source.m_energyPoints;
		m_attackDamage = source.m_attackDamage;
	}
	return (*this);
	std::cout << "assignetment operator overload of ScavTrap called" << std::endl;
}
