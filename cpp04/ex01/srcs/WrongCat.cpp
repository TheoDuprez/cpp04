/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 11:41:20 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj)
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
