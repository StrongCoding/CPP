/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 10:55:03 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					m_value_number;
		static const int	m_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator =(const Fixed &source);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif