/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:45:19 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:35:14 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void): AMateria("AMateria")
{
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice& obj): AMateria(obj)
{
	*this = obj;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice&	Ice::operator=(const Ice& obj)
{
	(void)obj;
	return *this;
}
AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
