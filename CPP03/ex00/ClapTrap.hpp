/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:06:47 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 21:08:52 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
    private:
        std::string m_name;
        int m_hitPoints = 10;
        int m_energyPoints = 10;
        int m_attackDamage = 0;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator =(const ClapTrap &source);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif