/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:41:53 by tduprez          ###   ########lyon.fr   */
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

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "-------------------------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "-------------------------------------" << std::endl;

	const WrongAnimal* wrong = new WrongCat();

	std::cout << "-------------------------------------" << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();
	std::cout << "-------------------------------------" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrong;

	return 0;
}
