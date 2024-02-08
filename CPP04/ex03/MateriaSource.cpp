/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:44:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/08 15:59:49 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	m_learntMateria[0] = NULL;
	m_learntMateria[1] = NULL;
	m_learntMateria[2] = NULL;
	m_learntMateria[3] = NULL;
	std::cout << "im default constructor of MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	while (m_learntMateria[++i] != NULL && i < 4)
		delete m_learntMateria[i];
	std::cout << "im default deconstructor of MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "im default copy constructor of MateriaSource" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	std::cout << "im overloaded assignment operator of MateriaSource" << std::endl;
	if (this != &source)
	{
		
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* newMateria)
{
	int i = -1;
	
	while (m_learntMateria[++i] != NULL && i < 4)
		;
	if (i != 3)
		m_learntMateria[i] = newMateria;
	else
		std::cout << "Full learnm_learntMateria!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = -1;
	
	while (++i < 4)
	{
		if((m_learntMateria[++i])->getType() == type)
		{
			AMateria* copy = m_learntMateria[i]->clone();
			return (copy);
		}
	}
	return NULL;
}
