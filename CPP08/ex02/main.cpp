/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:20:13 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/05 11:15:25 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <deque>


int main(void)
{
	// std::vector<int> vec = {1, 2, 3, 4, 5};
	
	// // Verwenden Sie den Iterator, um durch den Vektor zu iterieren
	// for(std::vector<int>::iterator itv = vec.begin(); itv != vec.end(); ++itv) {
	// 	std::cout << *itv << " ";
	// }
	
	MutantStack<int>::iterator a;
	
	MutantStack<int> mstack;
	MutantStack<int> bigstack;
	std::stack<int> stack;
	srand(std::time(0));
	// std::cout << "empty mstack top: " << mstack.top() << std::endl;
	// std::cout << "empty stack top: " << mstack.top() << std::endl;
	int i = 1000;
	while (--i > 0)
		bigstack.push(rand());
	MutantStack<int>::iterator bit = bigstack.begin();
	MutantStack<int>::iterator bite = bigstack.end();
	while (bit != bite)
	{
		std::cout << *bit << std::endl;
		++bit;
	}
	mstack.push(5);
	mstack.push(17);
	mstack.push(99);
	mstack.push(1);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(99);
	mstack.push(3);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "begin: " << *it << std::endl;
	std::cout << "end: " << *ite << std::endl;
	MutantStack<int>::iterator it2(it);
	MutantStack<int>::iterator ite2(ite);
	MutantStack<int>::iterator it3;
	MutantStack<int>::iterator ite3;
	it3 = it;
	ite3 = ite;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << "mstack size: " << mstack.size() << std::endl;
	std::cout << "mstack top: " << mstack.top() << std::endl;
	// std::stack<int> s(mstack);
	// std::cout << "s size: " << s.size() << std::endl;
	// std::cout << "s top: " << s.top() << std::endl;
	// std::cout << "s top: " << s.top() << std::endl;
	MutantStack<int> msstack2(mstack);
	MutantStack<int> msstack3;
	msstack3 = mstack;
	std::cout << "mstack2 size: " << msstack2.size() << std::endl;
	std::cout << "mstack2 top: " << msstack2.top() << std::endl;
	std::cout << "mstack2 top: " << msstack2.top() << std::endl;
	std::cout << "mstack3 size: " << msstack3.size() << std::endl;
	std::cout << "mstack3 top: " << msstack3.top() << std::endl;
	std::cout << "mstack3 top: " << msstack3.top() << std::endl;
	return 0;
}