/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 22:45:11 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}

Animal&		Cat::operator=(const Animal& obj)
{
	std::cout << "Assignation operator dog for animal" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}
