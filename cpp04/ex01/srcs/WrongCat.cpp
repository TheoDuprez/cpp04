/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:36:22 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << "WrongCat constructor by copy" << std::endl;
	*this = obj;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->_type = obj.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
}
