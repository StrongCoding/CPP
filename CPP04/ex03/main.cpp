/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:27:17 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/12 10:05:50 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AMateria.hpp"
// #include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "Ground.hpp"

int main()
{
	Ground* grd = new Ground();
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0, grd);
	grd->showGroundMateria();

	// add array of 10 and if this is full stuff gets deleted
	
	delete bob;
	delete me;
	delete src;
	delete grd;

	return 0;
}