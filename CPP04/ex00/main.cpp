/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:53:54 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 08:49:47 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const WrongAnimal* mutu = new WrongAnimal();
	// const WrongAnimal* a = new WrongCat();
	// std::cout << "a->gettype: "<< a->getType()  << std::endl;
	// std::cout << "a->makeSound: ";
	// a->makeSound(); //will not output the cat sound!
	// std::cout << "mutu->makeSound: ";
	// mutu->makeSound();
	// delete mutu;
	// delete a;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << " j->getType: " << j->getType()  << std::endl;
	std::cout << " i->getType: " << i->getType() << std::endl;
	std::cout << "i->makeSound: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "j->makeSound: ";
	j->makeSound();
	std::cout << "meta->makeSound: ";
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return (0);
}