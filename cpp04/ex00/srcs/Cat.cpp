/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/11 21:10:46 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
