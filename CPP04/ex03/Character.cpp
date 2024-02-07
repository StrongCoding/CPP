/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:09:10 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/07 15:35:46 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : m_type("Character")
{
	m_inventory[0] = NULL;
	m_inventory[1] = NULL;
	m_inventory[2] = NULL;
	m_inventory[3] = NULL;
	std::cout << "im default constructor of Character" << std::endl;
}

Character::~Character()
{
	std::cout << "im default deconstructor of Character" << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << "im default copy constructor of Character" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &source)
{
	std::cout << "im overloaded assignment operator of Character" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (m_name);
}

void Character::equip(AMateria *m)
{
	int i = -1;
	
	while (m_inventory[++i] != NULL)
		;
	if (i != 3)
		m_inventory[i] = m;
	else
		std::cout << "Full inventory!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		m_inventory[idx] = NULL;
	std::cout << "unequipping slot " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	m_inventory[idx]->use(target);
}
