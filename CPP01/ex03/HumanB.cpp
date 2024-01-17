/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:11:04 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 20:54:25 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (m_weapon.getType() == "")
		std::cout << m_name << " attacks with their hands" << std::endl;
	else
		std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	m_weapon = weapon;
}

HumanB::HumanB(std::string name)
{
	m_name = name;
}
