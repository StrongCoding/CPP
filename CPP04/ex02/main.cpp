/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:53:54 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 09:44:22 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AbstractAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AbstractAnimal* j = new Dog();
	const AbstractAnimal* j2 = new Dog();
	const AbstractAnimal* i = new Cat();
	const AbstractAnimal* i2 = new Cat();
	// const AbstractAnimal* y = new AbstractAnimal();
	// delete y;
	std::cout << "address of j: " << &j << std::endl;
	std::cout << "address of j2: " << &j2 << std::endl;
	std::cout << "address of i: " << &i << std::endl;
	std::cout << "address of i2: " << &i2 << std::endl;
	delete j;//should not create a leak
	delete i;
	delete j2;
	delete i2;
	

	return 0;
}