/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/22 18:10:59 by dnebatz          ###   ########.fr       */
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
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator =(const Fixed &source);
		// void operator <<(std::ostream &outputstream);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
};

std::ostream &operator <<(std::ostream &outputstream, const Fixed &fixed);

#endif