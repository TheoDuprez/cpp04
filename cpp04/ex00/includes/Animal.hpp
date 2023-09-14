/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:21:35 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/11 21:26:45 by tduprez          ###   ########lyon.fr   */
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
	Animal(std::string name);
	Animal(const Animal& obj);

	virtual			~Animal(void);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
	Animal&			operator=(const Animal& obj);

};
