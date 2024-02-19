/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:53:27 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 16:53:50 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

template <typename T>
T max(T const &x, T const &y)
{
	if (x > y)
		return (x);
	return (y);
}

template <typename T>
T min(T const &x, T const &y)
{
	if (x < y)
		return (x);
	return (y);
}
template <typename T>
void swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif