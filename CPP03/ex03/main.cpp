/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:12:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/25 12:31:49 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	// int	i = 100;
	DiamondTrap c("Lion");
	c.ScavTrap::attack("me");
	c.whoAmI();
	// while(--i)
	// 	c.attack("Tree");
	// c.beRepaired(1);
	c:std::

	return (0);
}