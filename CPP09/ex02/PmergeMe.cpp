#include "PmergeMe.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:03:33 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/19 15:03:34 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

PmergeMe::PmergeMe()
{
	(void)m_time;
}

PmergeMe::PmergeMe(std::deque<unsigned int> dequeStack) : m_time(0)
{
	(void)dequeStack;
	
}

PmergeMe::PmergeMe(std::vector<unsigned int> vectorStack) : m_time(0)
{
	(void)vectorStack;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe &other)
{
	(void)other;
}

PmergeMe &PmergeMe::operator=(PmergeMe &other)
{
	return (other);
}
