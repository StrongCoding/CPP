/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:02:41 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 18:38:50 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Lady Gaga");
	Zombie *z = newZombie("Eminem");
	z->announce();
	delete z;
}
