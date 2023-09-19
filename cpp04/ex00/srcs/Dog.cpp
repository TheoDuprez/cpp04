/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/18 15:41:34 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
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
	return ;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->_type = obj.getType();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooof" << std::endl;
}
