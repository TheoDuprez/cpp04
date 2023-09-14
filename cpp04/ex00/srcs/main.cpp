/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/11 22:35:38 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "--------------Types------------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "-------------Sounds------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "-------------Delete-----------------" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "--------------wrongAnimal----------------" << std::endl;
	const WrongAnimal* wrongAnimalHeap = new WrongAnimal();
	const WrongAnimal* wrongCatHeap = new WrongCat();
	const WrongAnimal wrongCat = WrongCat();
	std::cout << "--------------Type wrongAnimal----------------" << std::endl;
	std::cout << wrongAnimalHeap->getType() << " " << std::endl;
	std::cout << wrongCatHeap->getType() << " " << std::endl;
	std::cout << wrongCat.getType() << " " << std::endl;
	std::cout << "--------------Sounds wrongAnimal----------------" << std::endl;
	wrongAnimalHeap->makeSound();
	wrongCatHeap->makeSound();
	wrongCat.makeSound();
	std::cout << "--------------Delete wrongAnimal--------------" << std::endl;
	delete wrongAnimalHeap;
	delete wrongCatHeap;


	return 0;
}
