/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 13:07:01 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main() {
	{
		std::cout << "----------Animal instantiation-----------" << std::endl;
		Animal test;
	}
	{
		std::cout << "----------Half dog / Half cat------------" << std::endl;
		Animal *animals[100];
		for (int i = 0; i < 100; i++)
			(i % 2 == 0) ? animals[i] = new Dog() : animals[i] = new Cat();
		std::cout << "-----Destructor-----" << std::endl;
		for (int i = 0; i < 100; i++)
			delete animals[i];
	}
	{
		std::cout << "---------Additionnal tests-----------" << std::endl;
		Animal *animals[2];
		animals[0] = new Dog();
		animals[1] = new Cat();

		Brain *brain = animals[1]->getBrain();
		brain->setIdea(0, "mouse");
		brain->setIdea(1, "food");
		std::cout << "-------- Assigment operator --------" << std::endl;
		*(animals[0]) = *(animals[1]);
		std::cout << "-------- Brain content --------" << std::endl;
		std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << animals[0]->getBrain()->getIdea(1) << std::endl;
		std::cout << "-------- Destructors --------" << std::endl;
		delete animals[0];
		delete animals[1];
	}
	{
		std::cout << "----------Deep copy test------------" << std::endl;
		Dog	dog1;
		Dog	dog2;
		
		dog1.getBrain()->setIdea(0, "test");
		dog2 = dog1;

		std::cout << "Dog 1 idea 0 : " << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Dog 2 idea 0 : " << dog2.getBrain()->getIdea(0) << std::endl;
	}
	return 0;
}

