/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:05:03 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 10:14:07 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>

class Cure
{
	private:

	public:
		Cure();
		~Cure();
		Cure(Cure &copy);
		Cure &operator =(Cure &source);
};

#endif