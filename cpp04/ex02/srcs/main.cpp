/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 22:44:40 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main() {
	{
		Animal *animals[100];
		for (int i = 0; i < 100; i++)
			(i % 2 == 0) ? animals[i] = new Dog() : animals[i] = new Cat();
		for (int i = 0; i < 100; i++)
			delete animals[i];
	}
	{
		Animal *animals[2];
		animals[0] = new Dog();
		animals[1] = new Cat();

		Brain *brain = animals[1]->getBrain();
		brain->ideas[0] = "test";
		brain->ideas[1] = "idea";
		std::cout << "-------- Assigment operator --------" << std::endl;
		*(animals[0]) = *(animals[1]);
		std::cout << "-------- Brain content --------" << std::endl;
		std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
		std::cout << animals[0]->getBrain()->ideas[1] << std::endl;
		std::cout << "-------- Destructors --------" << std::endl;
		delete animals[0];
		delete animals[1];
	}
	return 0;
}

