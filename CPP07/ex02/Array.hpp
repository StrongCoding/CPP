/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:14:29 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/20 18:11:09 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>

template <typename T>
class Array
{
	private:
		T*	m_array;
		int	m_size;

	public:
		Array();
		Array(int input);
		~Array();
		Array(Array const &other);
		Array &operator=(Array const &other);
		int size(void) const;
		T &operator[](int index);
		const T &operator[](int index) const;
};

# include "Array.tpp"
#endif