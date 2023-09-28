/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:34:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 13:13:09 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	std::cout << "AAnimal constructor by copy";
	*this = obj;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal& obj)
{
	this->_type = obj._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
