/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:20:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:40:02 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"


int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal animal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animal[i] = dog;
		else
			animal[i] = cat;
	}
	delete dog;
	delete cat;

	return (0);
}
