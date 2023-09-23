/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:45:07 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:39:59 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
		for (int i = 0; i < 4; i++)
			this->_materia[i] = obj._materia[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	return ;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			std::cout << "Materia " << m->getType() << " learned !" << std::endl;
			this->_materia[i] = m;
			return ;
		}
	}
	delete m;
	std::cout << "The inventory of materia is full ! You can't learn more materia !" << std::endl;
	return ;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
		{
			std::cout << "Materia " << type << " copied !" << std::endl;
			return this->_materia[i]->clone();
		}
	}
	std::cout << "Type unknow !" << std::endl;
	return NULL;
}

