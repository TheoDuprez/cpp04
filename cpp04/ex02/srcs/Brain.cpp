/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:04:32 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:33:51 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
	return ;
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	std::cout << "Copy brain constructor" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain assignement operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return *this;
}

void	Brain::setIdea(int idx, std::string idea)
{
	this->_ideas[idx] = idea;
	return ;
}

std::string	Brain::getIdea(int idx) const
{
	return this->_ideas[idx];
}
