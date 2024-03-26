/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:03:30 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/26 22:31:58 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>

bool	isNumber(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (false);
	return (true);
}

bool	checkInput(char **argv)
{
	int i = 0;
	
	while (argv[++i])
	{
		if (!isNumber(argv[i]))
			return (false);
	}
	return (true);
}

void printStack(std::vector<unsigned int> &stack)
{
	std::vector<unsigned int>::iterator it_begin = stack.begin();
	std::vector<unsigned int>::iterator it_end = stack.end();
	
	while (it_begin != it_end)
	{
		std::cout << *it_begin;
		it_begin++;
		if (it_begin != it_end)
			std::cout << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)	
{
	std::vector<unsigned int> vectorStack;
	std::deque<unsigned int> dequeStack;
	unsigned int value;
	
	if (argc == 1)
	{
		std::cout << "please use fore example ./PmergeMe 9 1 3 2" << std::endl;
		return (1);
	}	
	if (!checkInput(argv))
	{
		std::cout << "Input Error" << std::endl;
		return (1);
	}
	int i = 0;
	while (argv[++i])
	{
		std::istringstream inputString(argv[i]);
		inputString >> value;
		vectorStack.push_back(value);
		dequeStack.push_back(value);
	}
	// std::cout << "items: " << i - 1 << std::endl;
	std::cout << "Before: ";
	printStack(vectorStack);
	std::clock_t startVec = std::clock();
	PmergeMe a(vectorStack);
	std::clock_t endVec = std::clock();
	double durationVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC;
	std::clock_t startDeq = std::clock();
	PmergeMe b(dequeStack);
	std::clock_t endDeq = std::clock();
	double durationDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC;
	std::cout << "After: ";
	printStack(vectorStack);
	std::cout << "Time to process a range of " << dequeStack.size() << " elements with std::[deque] : " << durationDeq * 1000 << " us" << std::endl;
	std::cout << "Time to process a range of " << vectorStack.size() << " elements with std::[vector] : " << durationVec * 1000 << " us" << std::endl;
	return (0);
}
