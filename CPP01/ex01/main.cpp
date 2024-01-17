/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:38:50 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 18:50:48 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 5;
	
	Zombie *horde = zombieHorde(i, "Lady Gaga");
	while (i--)
		horde[i].announce();
	delete [] horde;
}
