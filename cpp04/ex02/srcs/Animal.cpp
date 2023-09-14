/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 14:08:50 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor" << std::endl;
	return ;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal type constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal constructor by copy";
	*this = obj;
	return ;
}

Animal&		Animal::operator=(const Animal& obj)
{
	this->_type = obj._type;
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

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}
