/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:57:23 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 20:07:56 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *array, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

class Iter
{
	private:
		std::string	m_type;
	public:
		Iter();
		Iter(std::string type);
		~Iter();
		Iter(Iter const &other);
		Iter &operator=(Iter const &other);
		std::string getType() const;
};

#endif