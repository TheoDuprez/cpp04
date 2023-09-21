/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:17:12 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/21 14:24:34 by tduprez          ###   ########lyon.fr   */
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

Character::Character(const Character& character): _name(character._name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = character._materia[i]->clone();
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < this->_trashSize; i++)
		if (this->_trash[i] != NULL)
			delete this->_trash[i];
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	return ;
}

Character&	Character::operator=(const Character& character)
{
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = character._materia[i]->clone();
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
			putOldMateriaToTrash(this->_materia[i]);
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

void	Character::putOldMateriaToTrash(AMateria* toTrash)
{
	AMateria**		newTrash;
	int	i = 0;

	this->_trashSize++;
	newTrash = new AMateria*[this->_trashSize];
	for (; i < this->_trashSize - 1; i++)
	{
		newTrash[i] = this->_trash[i]->clone();
		delete this->_materia[i];
	}
	newTrash[i] = toTrash;
	delete [] this->_trash;
	this->_trash = newTrash;
	return ;
}

