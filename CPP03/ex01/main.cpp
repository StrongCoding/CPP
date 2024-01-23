/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:12:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 21:42:30 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a;
	ClapTrap b("Lady Gaga");
	b.attack("Bjoern");
	b.beRepaired(2);
	b.takeDamage(8);
	a.beRepaired(1);
	a = b;
	a.takeDamage(20);
	a.beRepaired(2);
	b.attack("Bjoern4");
	b.attack("Bjoern5");
	b.attack("Bjoern6");
	b.attack("Bjoern7");
	b.attack("Bjoern8");
	b.attack("Bjoern9");
	b.attack("Bjoern10");
	b.attack("Bjoern11");
}