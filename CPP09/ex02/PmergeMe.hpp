/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:03:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/21 10:11:01 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>

class PmergeMe
{
	private:
	std::vector<unsigned int> m_vectorStack;
	std::deque<unsigned int> m_dequeStack;
	long long m_time;

	public:
		PmergeMe();
		PmergeMe(std::deque<unsigned int> dequeStack);
		PmergeMe(std::vector<unsigned int> vectorStack);
		~PmergeMe();
		PmergeMe(PmergeMe &other);
		PmergeMe &operator=(PmergeMe &other);
};

#endif