/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:35:25 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/20 14:29:59 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"
#include <iostream>

class Character;
class ICharacter
{

public:
	virtual				~ICharacter() {}
	virtual	std::string	const & getName() const = 0;
	virtual	void		equip(AMateria* m) = 0;
	virtual	void		unequip(int idx) = 0;
	virtual	void		use(int idx, ICharacter& target) = 0;

};
