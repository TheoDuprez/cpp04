/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:34:27 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = obj;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
	return ;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->_type = obj.getType();
	return *this;
}

Animal&		Cat::operator=(const Animal& obj)
{
	std::cout << "Assignation operator cat for animal" << std::endl;
	this->_type = obj.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*(obj.getBrain()));
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}
