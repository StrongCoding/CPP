/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:09:10 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/12 13:47:30 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : m_name("Character")
{
	m_inventory[0] = NULL;
	m_inventory[1] = NULL;
	m_inventory[2] = NULL;
	m_inventory[3] = NULL;
	std::cout << "im default constructor of Character" << std::endl;
}

Character::Character(std::string name) : m_name(name)
{
	m_inventory[0] = NULL;
	m_inventory[1] = NULL;
	m_inventory[2] = NULL;
	m_inventory[3] = NULL;
	std::cout << "im default constructor of Character" << std::endl;
}

Character::~Character()
{
	int i = -1;
	while (++i < 4)
	{
		if (m_inventory[i] != NULL)
			delete m_inventory[i];
	}
	std::cout << "im default deconstructor of Character" << std::endl;
}

Character::Character(const Character &copy)
{
	// During copy, the Materias of a Character must be deleted before the new ones are added to their inventory. 
	std::cout << "im default copy constructor of Character" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &source)
{
	std::cout << "im overloaded assignment operator of Character" << std::endl;
	if (this != &source)
	{
		m_name = source.m_name;
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
	
	while (m_inventory[++i] != NULL && i < 4)
		;
	if (i != 4)
		m_inventory[i] = m;
	else
		std::cout << "Full inventory!" << std::endl;
}

void Character::unequip(int idx, Ground *ground)
{
	if (idx < 4 && idx >= 0)
	{
		ground->setGround(m_inventory[idx]);
		m_inventory[idx] = NULL;
	}
	std::cout << "unequipping slot " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	m_inventory[idx]->use(target);
}
