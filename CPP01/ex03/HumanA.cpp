/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:09:21 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 15:50:34 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) 
	: m_name(name)
	, m_weapon(&weapon)
{
}

HumanA::HumanA()
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}
