/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:00:08 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:06:38 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	WrongAnimal
{

protected:
	std::string	_type;
	std::string	_sound;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& obj);
	~WrongAnimal(void);

	WrongAnimal&		operator=(const WrongAnimal& obj);
	void			makeSound(void) const;
	std::string		getType(void) const;
	std::string		getSound(void) const;
	
};
