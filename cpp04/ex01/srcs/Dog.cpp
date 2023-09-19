/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:34:32 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog& obj)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = obj;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
	return ;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->_type = obj.getType();
	return *this;
}

Animal&		Dog::operator=(const Animal& obj)
{
	std::cout << "Assignation operator dog for animal" << std::endl;
	this->_type = obj.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*(obj.getBrain()));
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
