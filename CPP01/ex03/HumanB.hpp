/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:12:59 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 15:42:21 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon *m_weapon;

public:
	HumanB(std::string name);
	HumanB();
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
