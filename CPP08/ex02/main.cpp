/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:20:13 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/04 16:48:10 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	// std::vector<int> vec = {1, 2, 3, 4, 5};
	
	// // Verwenden Sie den Iterator, um durch den Vektor zu iterieren
	// for(std::vector<int>::iterator itv = vec.begin(); itv != vec.end(); ++itv) {
	// 	std::cout << *itv << " ";
	// }
	
	MutantStack<int>::iterator a;
	
	MutantStack<int> mstack;
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
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	int z = 987;
	std::cout << "z: " << z << std::endl;
	MutantStack<int>::iterator numberz(&z);
	std::cout << "numberz: " << *numberz << std::endl;
	std::cout << "begin: " << *it << std::endl;
	std::cout << "end: " << *ite << std::endl;
	int i = 0;
	while (it != ite && i < 10)
	{
		std::cout << *it << std::endl;
		++it;
		i++;
	}
	std::stack<int> s(mstack);
	return 0;
}