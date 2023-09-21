/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:02:34 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/21 14:18:11 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"

int main()
{
	{
		std::cout << "----------Part 1-----------" << std::endl;
		// AMateria*	trash = NULL;
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

		// trash = me->getMateria(1);
		me->unequip(1);
		// delete trash;
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n----------Part 2-----------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		// AMateria*	trash = NULL;

		for (int i = 0; i < 6; i++)
			(i % 2 == 0) ? src->learnMateria(new Ice()) : src->learnMateria(new Cure());

		ICharacter* tduprez = new Character("tduprez");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		tduprez->equip(tmp);
		tmp = src->createMateria("cure");
		tduprez->equip(tmp);
		tmp = src->createMateria("ice");
		tduprez->equip(tmp);
		tmp = src->createMateria("cure");
		tduprez->equip(tmp);
		tduprez->equip(tmp);

		// trash = tduprez->getMateria(1);
		tduprez->unequip(1);
		// delete trash;
		tmp = src->createMateria("cure");
		tduprez->equip(tmp);

		ICharacter* theo = new Character("theo");
		for (int i = 0; i < 4; i++)
			tduprez->use(i, *theo);

		delete theo;
		delete tduprez;
		delete src;
	}
	{
		std::cout << "\n----------Part 3-----------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		// AMateria*	trash = NULL;

		for (int i = 0; i < 4; i++)
			(i % 2 == 0) ? src->learnMateria(new Ice()) : src->learnMateria(new Cure());

		Character deepCopyTest("deepCopyTest");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("cure");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("ice");
		deepCopyTest.equip(tmp);
		tmp = src->createMateria("cure");
		deepCopyTest.equip(tmp);

		Character getCopy(deepCopyTest);
		Character getCopy2("getCopy2");
		getCopy2 = deepCopyTest;
		getCopy2 = getCopy;
		for (int i = 0; i < 4; i++)
		{
			// trash = deepCopyTest.getMateria(i);
			deepCopyTest.unequip(i);
			// delete trash;
		}
		for (int i = 0; i < 4; i++)
		{
			getCopy.use(i, getCopy);
			getCopy2.use(i, getCopy);
		}

		delete src;
	}
	return 0;
}
