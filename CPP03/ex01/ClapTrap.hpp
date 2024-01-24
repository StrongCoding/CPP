/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:06:47 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/24 18:27:33 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string m_name;
        int m_hitPoints;
        int m_energyPoints;
        int m_attackDamage;

    public:
        ClapTrap();
		ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator =(const ClapTrap &source);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		// void setHitPoints(int newHitPoints);
		// void setEnergyPoints(int newEnergyPoints);
		// void setAttackDamage(int newAttackDamage);
		// void setName(std::string newName);
		// int	getHitPoints(void);
		// int	getEnergyPoints(void);
		// int getAttackDamage(void);
		std::string getName(void);
};

#endif