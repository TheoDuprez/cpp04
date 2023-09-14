/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:17:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/13 22:06:04 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

Character::Character(const Character& character)
{
	for (int i = 0; i < 4; i++)
		*(this->_materia[i]) = *(character._materia[i]);
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	return ;
}

Character&	Character::operator=(const Character& character)
{
	*(this->_materia) = *(character._materia);
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return ;
		}
	}
	delete m;
	return ;
}

void	Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx)
		{
			this->_materia[i] = NULL;
			break ;
		}
	}
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->_materia[i] != NULL)
		{
			this->_materia[i]->use(target);
			break ;
		}
	}
	return ;
}

