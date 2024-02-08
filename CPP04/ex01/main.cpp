/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:53:54 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/08 14:54:48 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *cage[100];

	int i = -1;
	while(++i < 100)
	{
		if (i % 2 == 0)
			cage[i] = new Dog();
		else
			cage[i] = new Cat();
	}
	i = -1;
	while (++i < 100)
	{
		cage[i]->makeSound();
		delete cage[i];
	}
	const Animal* dog = new Dog();
	const Dog* dog2 = new Dog();
	const Animal* cat = new Cat();
	const Cat* cat2 = new Cat();
	// std::cout << "address of cat2 brain: " << &(cat2->m_brain) << std::endl;
	// std::cout << "address of cat: brain" << &(cat->m_brain) << std::endl;
	delete cat;//should not create a leak
	delete cat2;
	delete dog;
	delete dog2;
	
	Cat miau;
	{
		Cat withbrain;
	}

	return 0;
}