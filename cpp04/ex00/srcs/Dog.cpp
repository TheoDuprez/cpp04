/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:32:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/11 21:11:01 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooof" << std::endl;
}
