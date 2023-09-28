/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 13:05:33 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog& obj): Animal(obj)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = obj;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor" << std::endl;
	return ;
}

Dog&		Dog::operator=(const Dog& obj)
{
	std::cout << "Assignation operator dog" << std::endl;
	if (this != &obj)
	{
		delete this->_brain;
		this->_type = obj.getType();
		this->_brain = new Brain(*(obj.getBrain()));
	}
	return *this;
}

Animal&		Dog::operator=(const Animal& obj)
{
	std::cout << "Assignation operator animal for dog" << std::endl;
	if (this != &obj)
	{
		delete this->_brain;
		this->_type = obj.getType();
		this->_brain = new Brain(*(obj.getBrain()));
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooof" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}
