/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:53:54 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 21:32:48 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const WrongAnimal* mutu = new WrongAnimal();
	const WrongAnimal* a = new WrongCat();
	std::cout << a->getType() << " a type" << std::endl;
	a->makeSound(); //will not output the cat sound!
	mutu->makeSound();


	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " j type" << std::endl;
	std::cout << i->getType() << " i type" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// delete mutu;
	// delete a;
	// delete meta;
	// delete j;
	// delete i;

	return (0);
}