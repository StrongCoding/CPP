/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:05:04 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:14:04 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef ICE_HPP
# define ICE_HPP
# include <iostream>

class Ice
{
	private:

	public:
		Ice();
		~Ice();
		Ice(Ice &copy);
		Ice &operator =(Ice &source);
};

#endif