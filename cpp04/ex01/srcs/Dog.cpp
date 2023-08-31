/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:17:43 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->_brain = new Brain;
	this->_type = "Dog";
	this->_sound = "Waouf";
	std::cout << "Dog constructor" << std::endl;
	return ;
}

Dog::Dog(const Dog& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	std::cout << "Dog constructor by copy";
	return ;
}

Dog::~Dog(void)
{
	delete	_brain;
	std::cout << "Dog destructor" << std::endl;
	return ;
}

Dog&		Dog::operator=(const Dog& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << getSound() << std::endl;
}
