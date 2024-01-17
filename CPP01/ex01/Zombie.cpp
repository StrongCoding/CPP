/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:04:43 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 18:48:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name)
{

}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << m_name << ": no more BrainZzZ for meeehh........" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	m_name = name;
}