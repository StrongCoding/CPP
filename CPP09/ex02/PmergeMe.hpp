/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:03:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/27 08:45:25 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <utility>
# include <iostream>
# include <algorithm>
# include <ctime>

class PmergeMe
{
	private:
	std::vector<unsigned int> m_vectorStack;
	std::deque<unsigned int> m_dequeStack;
	// double	m_executionTimeVector;
	// double	m_executionTimeDeque;

	public:
		PmergeMe();
		PmergeMe(std::deque<unsigned int> &dequeStack);
		PmergeMe(std::vector<unsigned int> &vectorStack);
		~PmergeMe();
		PmergeMe(PmergeMe &other);
		PmergeMe &operator=(PmergeMe &other);
		void printStack(std::vector<unsigned int> &stack);
		void printPairs(std::vector<std::pair<unsigned int, unsigned int> > &pairs);
		void sortEachPair(std::vector<std::pair<unsigned int, unsigned int> > &pairs);
		void sortPairs(std::vector<std::pair<unsigned int, unsigned int> > &pairs);
		bool checkSortedPair(std::vector<std::pair<unsigned int, unsigned int> > &pairs);
		static bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b);
		void mergeInsertion(std::vector<std::pair<unsigned int,unsigned int> > &pairs, std::vector<unsigned int> &vectorStack);
		void setNextJacNumber(unsigned int &prevJacNumber, unsigned int &jacNumber);
		
		void printStack(std::deque<unsigned int> &stack);
		void printPairs(std::deque<std::pair<unsigned int, unsigned int> > &pairs);
		void sortEachPair(std::deque<std::pair<unsigned int, unsigned int> > &pairs);
		void sortPairs(std::deque<std::pair<unsigned int, unsigned int> > &pairs);
		bool checkSortedPair(std::deque<std::pair<unsigned int, unsigned int> > &pairs);
		void mergeInsertion(std::deque<std::pair<unsigned int,unsigned int> > &pairs, std::deque<unsigned int> &dequeStack);
};

#endif
