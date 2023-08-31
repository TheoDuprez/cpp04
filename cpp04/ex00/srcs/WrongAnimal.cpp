/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:38:31 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal"), _sound("...")
{
	std::cout << "WrongAnimal constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj): _type(obj._type), _sound(obj._type)
{
	std::cout << "WrongAnimal constructor by copy";
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

std::string	WrongAnimal::getSound(void) const
{
	return (this->_sound);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << getSound() << std::endl;
}
