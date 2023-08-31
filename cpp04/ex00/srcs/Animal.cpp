/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:38:13 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void): _type("Animal"), _sound("...")
{
	std::cout << "Animal constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal& obj): _type(obj._type), _sound(obj._type)
{
	std::cout << "Animal constructor by copy";
	return ;
}

Animal&		Animal::operator=(const Animal& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

std::string	Animal::getSound(void) const
{
	return (this->_sound);
}

void	Animal::makeSound(void) const
{
	std::cout << getSound() << std::endl;
}
