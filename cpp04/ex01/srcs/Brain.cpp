/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:08:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:36:30 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor";
	return ;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor";
	return ;
}

Brain&	Brain::operator=(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return (*this);
}
