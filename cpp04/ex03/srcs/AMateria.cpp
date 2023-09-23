/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:30:09 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:22:21 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	return *this;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Use " << target.getName() << " Materia" << std::endl;
	return ;
}
