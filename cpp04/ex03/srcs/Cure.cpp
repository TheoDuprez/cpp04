/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:45:19 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 14:07:51 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void): AMateria("AMateria")
{
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure& obj): AMateria(obj)
{
	*this = obj;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure&	Cure::operator=(const Cure& obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
