/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:30:09 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	std::cout << "WrongCat constructor by copy";
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
	return ;
}

WrongCat&		WrongCat::operator=(const WrongCat& obj)
{
	this->_type = obj._type;
	this->_sound = obj._sound;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
}
