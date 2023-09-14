/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:17:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/14 17:16:05 by tduprez          ###   ########lyon.fr   */
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
			std::cout << "Materia " << m->getType() << " is assigned to " << this->_name << " at index " << i << " !" << std::endl;
			this->_materia[i] = m;
			return ;
		}
	}
	std::cout << "Inventory of materias can't be filled, because is full ! Use the unequip function to replace it." << std::endl;
	// Delete pas sur, a check avec valgrind
	// delete m;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "This index does'nt exist !" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->_materia[i] != NULL)
		{
			std::cout << "Materia " << this->_materia[i]->getType() << " at index " << i << " have been cleared !" << std::endl;
			this->_materia[i] = NULL;
			return ;
		}
	}
	std::cout << "This materia is already empty !" << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "This index does'nt exist !" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->_materia[i] != NULL)
		{
			this->_materia[i]->use(target);
			return ;
		}
	}
	std::cout << "This materia is empty, you can't use it !" << std::endl;
	return ;
}

