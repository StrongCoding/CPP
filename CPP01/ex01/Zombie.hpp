/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:04:25 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 19:49:11 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

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

#endif
