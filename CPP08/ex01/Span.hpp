/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:27:04 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 17:04:20 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <limits>

class Span
{
	private:
		unsigned int		m_size;
		unsigned int		m_amount;
		std::vector<int>	m_vector;

	public:
		Span();
		Span(unsigned int size);
		~Span();
		Span(Span &other);
		Span &operator =(Span &other);
		void addnumber(int number);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};

#endif