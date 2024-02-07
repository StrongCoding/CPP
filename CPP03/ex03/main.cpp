/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:12:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/07 09:47:49 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	// int	i = 101;
	// ScavTrap* clap = new DiamondTrap("name");

	// delete clap;

	DiamondTrap c("Lion");
	c.whoAmI();
	// while(--i)
		c.attack("Tree");
	// c.takeDamage(10);
	// c.beRepaired(1);
	// c.guardGate();
	// std::cout << "name of Diamond " << c.m_name << std::endl;

	return (0);
}