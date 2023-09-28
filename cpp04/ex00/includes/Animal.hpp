/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:21:35 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 11:34:24 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal
{

protected:
	std::string	_type;

public:
	Animal(void);
	Animal(const Animal& obj);
	virtual			~Animal(void);

	Animal&			operator=(const Animal& obj);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};
