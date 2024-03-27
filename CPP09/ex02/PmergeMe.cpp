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
}

PmergeMe::PmergeMe(std::deque<unsigned int> &dequeStack)
{
	std::deque<std::pair<unsigned int, unsigned int> > pairs;

	// 1. fill pair stack
	unsigned int	first;
	unsigned int	second;
	int loopSize = dequeStack.size() / 2;
	std::deque<unsigned int>::iterator it;
	it = dequeStack.begin();
	int i = -1;
	while (++i < loopSize)
	{
		first = *it++;
		second = *it;
		pairs.push_back(std::make_pair(first, second));
		it++;
	}
	// PmergeMe::printPairs(pairs);
	PmergeMe::sortEachPair(pairs);
	// PmergeMe::printPairs(pairs);
	PmergeMe::sortPairs(pairs);
	// PmergeMe::printPairs(pairs);
	PmergeMe::mergeInsertion(pairs, dequeStack);
	
}

PmergeMe::PmergeMe(std::vector<unsigned int> &vectorStack)
{
	std::vector<std::pair<unsigned int, unsigned int> > pairs;

	// 1. fill pair stack
	unsigned int	first;
	unsigned int	second;
	int loopSize = vectorStack.size() / 2;
	std::vector<unsigned int>::iterator it;
	it = vectorStack.begin();
	int i = -1;
	while (++i < loopSize)
	{
		first = *it++;
		second = *it;
		pairs.push_back(std::make_pair(first, second));
		it++;
	}
	// PmergeMe::printPairs(pairs);
	PmergeMe::sortEachPair(pairs);
	// PmergeMe::printPairs(pairs);
	PmergeMe::sortPairs(pairs);
	// PmergeMe::printPairs(pairs);
	PmergeMe::mergeInsertion(pairs, vectorStack);
	// PmergeMe::printStack(vectorStack);

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


void PmergeMe::printStack(std::vector<unsigned int> &stack)
{
	std::vector<unsigned int>::iterator it_begin = stack.begin();
	std::vector<unsigned int>::iterator it_end = stack.end();
	
	// std::cout << "before: ";
	while (it_begin != it_end)
	{
		std::cout << *it_begin;
		it_begin++;
		if (it_begin != it_end)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printPairs(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		std::cout << "Pair " << i+1 << ": " << pairs[i].first << ", " << pairs[i].second << std::endl;
	}
	std::cout << std::endl;
}

void PmergeMe::sortEachPair(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	unsigned int	temp;
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		// std::cout << "comparing first " << pairs[i].first << " second: " << pairs[i].second << std::endl;
		if (pairs[i].first < pairs[i].second)
			continue;
		temp = pairs[i].first;
		pairs[i].first = pairs[i].second;
		pairs[i].second = temp;
		// std::cout << "swapping first " << temp << " second: " << pairs[i].first << std::endl;
	}
}


void PmergeMe::sortPairs(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	std::sort(pairs.begin(), pairs.end(), comparePairs);
}

bool PmergeMe::checkSortedPair(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size() - 1; ++i)
	{
		if (pairs[i].second < pairs[i + 1].second)
		{
			// std::cout << "not sorted" << std::endl;
			return (false);
		}
	}
	// std::cout << "sorted" << std::endl;
	return (true);

}

bool PmergeMe::comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
	return a.second < b.second;
}

void PmergeMe::mergeInsertion(std::vector<std::pair<unsigned int,unsigned int> > &pairs, std::vector<unsigned int> &vectorStack)
{
	unsigned int	odd;
	bool	isOdd = false;
	unsigned int	prevJacNumber = 1;
	unsigned int	jacNumber = 1;
	if (vectorStack.size() % 2 == 1)
	{
		odd = vectorStack.back();
		isOdd = true;
	}
	vectorStack.clear();
	(void)pairs;
	// make a chain
	vectorStack.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		vectorStack.push_back(pairs[i].second);
	}
	// printStack(vectorStack);
	// std::cout << "pairs size number: " << pairs.size() << std::endl;
	
	// insert with Jacobsthal numbers
	// std::vector<unsigned int>::iterator it;
	// it = std::find(vectorStack.begin(), vectorStack.end(), pairs[2].second);
	// std::cout << "iterator find number: " << *it << std::endl;
	for (int i = pairs.size(); i > 0; i--)
	{
		setNextJacNumber(prevJacNumber, jacNumber);
		// std::cout << "jacobsthal number: " << jacNumber << std::endl;
		for (unsigned int j = jacNumber - 1; j + 1 > prevJacNumber; j--)
		{
			if (j >= pairs.size())
				continue;
			// std::cout << "j number: " << j << " i number: " << i << " pairs[j] first: " << pairs[j].first << " pairs[j] second: " << pairs[j].second << std::endl;
			vectorStack.insert(std::lower_bound(vectorStack.begin(), std::find(vectorStack.begin(), vectorStack.end(), pairs[j].second), pairs[j].first), pairs[j].first);
			i--;
		}
	}
	if (isOdd)
	{
			vectorStack.insert(std::lower_bound(vectorStack.begin(), vectorStack.end(), odd), odd);
	}
	// printStack(vectorStack);
}

void PmergeMe::setNextJacNumber(unsigned int &prevJacNumber, unsigned int &jacNumber)
{
	unsigned int temp;
	temp = jacNumber;
	jacNumber = prevJacNumber * 2 + jacNumber;
	prevJacNumber = temp;
}

void PmergeMe::printStack(std::deque<unsigned int> &stack)
{
	std::deque<unsigned int>::iterator it_begin = stack.begin();
	std::deque<unsigned int>::iterator it_end = stack.end();
	
	// std::cout << "before: ";
	while (it_begin != it_end)
	{
		std::cout << *it_begin;
		it_begin++;
		if (it_begin != it_end)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printPairs(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		std::cout << "Pair " << i+1 << ": " << pairs[i].first << ", " << pairs[i].second << std::endl;
	}
	std::cout << std::endl;
}

void PmergeMe::sortEachPair(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	unsigned int	temp;
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		// std::cout << "comparing first " << pairs[i].first << " second: " << pairs[i].second << std::endl;
		if (pairs[i].first < pairs[i].second)
			continue;
		temp = pairs[i].first;
		pairs[i].first = pairs[i].second;
		pairs[i].second = temp;
		// std::cout << "swapping first " << temp << " second: " << pairs[i].first << std::endl;
	}
}


void PmergeMe::sortPairs(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	std::sort(pairs.begin(), pairs.end(), comparePairs);
}

bool PmergeMe::checkSortedPair(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size() - 1; ++i)
	{
		if (pairs[i].second < pairs[i + 1].second)
		{
			// std::cout << "not sorted" << std::endl;
			return (false);
		}
	}
	// std::cout << "sorted" << std::endl;
	return (true);

}

void PmergeMe::mergeInsertion(std::deque<std::pair<unsigned int,unsigned int> > &pairs, std::deque<unsigned int> &dequeStack)
{
	unsigned int	odd;
	bool	isOdd = false;
	unsigned int	prevJacNumber = 1;
	unsigned int	jacNumber = 1;
	if (dequeStack.size() % 2 == 1)
	{
		odd = dequeStack.back();
		isOdd = true;
	}
	dequeStack.clear();
	(void)pairs;
	// make a chain
	dequeStack.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		dequeStack.push_back(pairs[i].second);
	}
	// printStack(dequeStack);
	// std::cout << "pairs size number: " << pairs.size() << std::endl;
	
	// insert with Jacobsthal numbers
	// std::deque<unsigned int>::iterator it;
	// it = std::find(dequeStack.begin(), dequeStack.end(), pairs[2].second);
	// std::cout << "iterator find number: " << *it << std::endl;
	for (int i = pairs.size(); i > 0; i--)
	{
		setNextJacNumber(prevJacNumber, jacNumber);
		// std::cout << "jacobsthal number: " << jacNumber << std::endl;
		for (unsigned int j = jacNumber - 1; j + 1 > prevJacNumber; j--)
		{
			if (j >= pairs.size())
				continue;
			// std::cout << "j number: " << j << " i number: " << i << " pairs[j] first: " << pairs[j].first << " pairs[j] second: " << pairs[j].second << std::endl;
			dequeStack.insert(std::lower_bound(dequeStack.begin(), std::find(dequeStack.begin(), dequeStack.end(), pairs[j].second), pairs[j].first), pairs[j].first);
			i--;
		}
	}
	if (isOdd)
	{
			dequeStack.insert(std::lower_bound(dequeStack.begin(), dequeStack.end(), odd), odd);
	}
	// printStack(dequeStack);
}