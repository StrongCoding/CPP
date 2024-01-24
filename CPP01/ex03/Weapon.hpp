/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:47:58 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/24 11:04:07 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string m_type;

public:
	Weapon();
	Weapon(std::string type);
	// Weapon(NULL);
	~Weapon();
	void setType(std::string type);
	const std::string &getType();
};

#endif
