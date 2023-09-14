/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 22:45:55 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooof" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}

Animal&		Dog::operator=(const Animal& obj)
{
	std::cout << "Assignation operator dog for animal" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}
