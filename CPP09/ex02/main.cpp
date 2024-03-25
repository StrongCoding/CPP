/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:03:30 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/20 17:45:17 by dnebatz          ###   ########.fr       */
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
	
	std::cout << "before: ";
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
	std::cout << "items: " << i << std::endl;
	printStack(vectorStack);
	return (0);
}
