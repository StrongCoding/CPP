/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:55:13 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/24 11:07:46 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type) : m_type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	m_type = type;
}

const std::string &Weapon::getType()
{
	return (m_type);
}
