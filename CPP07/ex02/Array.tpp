/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:15:20 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/20 21:05:12 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : m_size(0)
{
	m_array = new T[0];
}

template<typename T>
Array<T>::Array(int input) : m_size(input)
{
	m_array = new T[input];
}

template<typename T>
Array<T>::~Array()
{
	delete[] m_array;
}

template<typename T>
Array<T>::Array(Array<T> const &other) : m_size(other.m_size)
{
	m_array = new T[other.size()];
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this != &other)
	{
		delete[] m_array;

		m_array = new T[other.size()];
		m_size = other.m_size;
		int i = -1;
		while (++i < other.size())
		{
			m_array[i] = other.m_array[i];
		}
	}

	return (*this);
}

template<typename T>
int Array<T>::size(void) const
{
return 0;
}

template<typename T>
T &Array<T>::operator[](int index)
{
	if (index >= m_size || index < 0)
		throw std::exception();
	return (m_array[index]);
}

template<typename T>
const T &Array<T>::operator[](int index) const
{
	if (index >= m_size || index < 0)
		throw std::exception();
	return (m_array[index]);
}