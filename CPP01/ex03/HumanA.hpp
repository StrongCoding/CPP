/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:05:20 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/17 20:44:31 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon m_weapon;

public:
	HumanA(std::string name, Weapon weapon);
	HumanA();
	~HumanA();
	void attack();
	void setWeapon(Weapon weapon);
};

#endif