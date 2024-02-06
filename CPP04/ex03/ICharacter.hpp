/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:05:06 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:14:00 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>

class ICharacter
{
	private:

	public:
		ICharacter();
		~ICharacter();
		ICharacter(ICharacter &copy);
		ICharacter &operator =(ICharacter &source);
};

#endif