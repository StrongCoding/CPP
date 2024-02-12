#include "Ground.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:21:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/12 09:21:37 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
Ground::Ground()
{
	m_groudMaterias[0] = NULL;
	m_groudMaterias[1] = NULL;
	m_groudMaterias[2] = NULL;
	m_groudMaterias[3] = NULL;
	m_countGroundMaterias = 0;
	std::cout << "im default constructor of Ground" << std::endl;
}

Ground::~Ground()
{
	int i = -1;
	while (++i < 4)
	{
		if (m_groudMaterias[i])
			delete m_groudMaterias[i];
	}
	std::cout << "im default deconstructor of Ground" << std::endl;
}

Ground::Ground(Ground &copy)
{
	std::cout << "im default copy constructor of Ground" << std::endl;
	*this = copy;
}

Ground &Ground::operator=(Ground &source)
{
	if (this != &source)
	{
		int i = -1;
		while (++i < 4)
			m_groudMaterias[i] = source.m_groudMaterias[i];
	}
	std::cout << "im overloaded assignment operator of Ground" << std::endl;
	return (*this);
}

void Ground::setGround(AMateria *newGroundMateria)
{
	std::cout << "Materia was put on the ground" << std::endl;
	delete m_groudMaterias[m_countGroundMaterias % 4];
	m_groudMaterias[m_countGroundMaterias % 4] = newGroundMateria;
}

void Ground::showGroundMateria(void)
{
	std::cout << "On the ground are laying: ";
	int i = -1;
	while (++i < 4 && m_groudMaterias[i] != NULL)
	{
		std::cout << m_groudMaterias[i]->getType();
		if (i != int(m_countGroundMaterias))
			std::cout << " and ";
	}
	std::cout << std::endl;
}
