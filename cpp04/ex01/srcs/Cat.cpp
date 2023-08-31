/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:17:12 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->_brain = new Brain;
	this->_type = "Cat";
	this->_sound = "Miaou";
	std::cout << "Cat constructor" << std::endl;
	return ;
}

Cat::Cat(const Cat& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	std::cout << "Cat constructor by copy";
	return ;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
	return ;
}

Cat&		Cat::operator=(const Cat& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << getSound() << std::endl;
}
