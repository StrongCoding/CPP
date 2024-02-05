/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:42:12 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:58:11 by dnebatz          ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
	std::cout << "default copy constructor of FragTrap called" << std::endl;
}

FragTrap &FragTrap::operator =(FragTrap &source)
{
	if (this != &source)
	{
		m_name = source.m_name;
		m_hitPoints = source.m_hitPoints;
		m_energyPoints = source.m_energyPoints;
		m_attackDamage = source.m_attackDamage;
	}
	return (*this);
	std::cout << "assignetment operator overload of FragTrap called" << std::endl;
}
