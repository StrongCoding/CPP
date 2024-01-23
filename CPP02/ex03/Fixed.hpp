/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:21:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/23 10:28:57 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
		bool operator >(const Fixed &source) const;
		bool operator <(const Fixed &source) const;
		bool operator >=(const Fixed &source) const;
		bool operator <=(const Fixed &source) const;
		bool operator ==(const Fixed &source) const;
		bool operator !=(const Fixed &source) const;
		
		float operator +(float value);
		int operator +(int value);
		Fixed operator +(Fixed value);
		float operator -(float value);
		int operator -(int value);
		Fixed operator -(Fixed value);
		float operator *(float value);
		int operator *(int value);
		Fixed operator *(Fixed value);
		float operator /(float value);
		int operator /(int value);
		Fixed operator /(Fixed value);
		
		Fixed &operator ++(void);
		Fixed operator ++(int);
		Fixed &operator --(void);
		Fixed &operator --(int);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		const static Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);
		
};

std::ostream &operator <<(std::ostream &outputstream, const Fixed &fixed);

#endif