/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:29:21 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal constructor by copy" << std::endl;
	*this = obj;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->_type = obj._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "..." << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
