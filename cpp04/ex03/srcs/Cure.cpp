/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:45:19 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:34:12 by tduprez          ###   ########lyon.fr   */
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
	(void)obj;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
