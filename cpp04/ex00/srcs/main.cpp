/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/20 13:26:56 by tduprez          ###   ########lyon.fr   */
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
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "--------------Type wrongAnimal----------------" << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << "--------------Sounds wrongAnimal----------------" << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	std::cout << "--------------Delete wrongAnimal--------------" << std::endl;
	delete wrongAnimal;
	delete wrongCat;


	return 0;
}
