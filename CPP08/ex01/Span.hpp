/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:27:04 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 20:26:51 by dnebatz          ###   ########.fr       */
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
		Span(Span const &other);
		Span &operator =(Span const &other);
		void addnumber(int number);
		void addnumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};

#endif