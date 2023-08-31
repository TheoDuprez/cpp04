/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:21:35 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 13:36:59 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal
{

protected:
	std::string	_type;
	std::string	_sound;

public:
	Animal(void);
	Animal(const Animal& obj);
	virtual ~Animal(void);
	// Le destructor virtuel permet de detruire les sous objet, par exemple :
	// Animal* test = new dog; (dog etant un objet derive de Animal). Si on delete test sans destructeur virtuel, le compilateur va detruire
	// uniquement l'objet animal (car c'est le type de test), mais pas son sous objet. Virtual permet de detruire tout les sous objets et l'objet parent.
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
	std::string		getSound(void) const;
	Animal&		operator=(const Animal& obj);

	

};
