/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:04:25 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 18:49:36 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string m_name;
	
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
