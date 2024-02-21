/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:23:39 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 15:16:05 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main(void)
{
	std::vector<int> v1;
	std::vector<int>::iterator iv1;
	v1.push_back(4);
	v1.push_back(2);
	v1.push_back(1);
	v1.push_back(9);
	v1.push_back(3);
	std::list<int> l1;
	std::list<int>::iterator il1;
	l1.push_back(12);
	l1.push_back(99);
	l1.push_back(0);
	l1.push_back(4);
	l1.push_back(21);
	l1.push_back(7);
	std::cout << "huuu huuu" << std::endl;
	try
	{
		std::cout << "searching 9 in v1" << std::endl;
		iv1 = easyfind(v1, 9);
		std::cout << *iv1 << std::endl;
		std::cout << &(*iv1) << std::endl;
		std::cout << &v1[3] << std::endl;
		std::cout << "searching 21 in l1" << std::endl;
		il1 = easyfind(l1, 21);
		std::cout << *il1 << std::endl;
		std::cout << "searching 0 in v1" << std::endl;
		easyfind(v1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}