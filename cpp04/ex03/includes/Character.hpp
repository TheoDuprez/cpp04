/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:20 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/21 14:19:46 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "./ICharacter.hpp"

class Character : public ICharacter
{

private:
	AMateria**	_trash;
	int			_trashSize;
	AMateria*	_materia[4];
	std::string	_name;

public:
	Character(void);
	Character(std::string name);
	Character(const Character& character);
	~Character(void);

	Character&	operator=(const Character& character);
	std::string	const & getName() const;
	void		equip(AMateria* m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);
	void		putOldMateriaToTrash(AMateria* toTrash);

};
