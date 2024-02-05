/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:12:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:24:30 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdint>

int main( void )
{
	int	i = 51;
	ClapTrap a;
	ClapTrap b("Lady Gaga");
	b.attack("Bjoern");
	b.beRepaired(2);
	b.takeDamage(8);
	a.beRepaired(1);
	a = b;
	a.takeDamage(4294967295U);
	a.beRepaired(2);
	b.attack("Bjoern4");
	b.attack("Bjoern5");
	b.attack("Bjoern6");
	b.attack("Bjoern7");
	b.attack("Bjoern8");
	b.attack("Bjoern9");
	b.attack("Bjoern10");
	b.attack("Bjoern11");
	ScavTrap c("Bjoern");
	ScavTrap d;
	d.guardGate();
	while(--i)
		c.attack("Tree");
	d.takeDamage(1);
	d.takeDamage(99);
	d.beRepaired(1);
	c.beRepaired(1);
	return (0);
}