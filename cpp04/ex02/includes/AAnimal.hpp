/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:21:35 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 14:02:18 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "./Brain.hpp"

class	AAnimal
{

protected:
	std::string	_type;

public:
	AAnimal(void);
	AAnimal(const AAnimal& obj);
	virtual			~AAnimal(void);

	virtual AAnimal&	operator=(const AAnimal& obj);
	virtual void	makeSound(void) const = 0;
	virtual Brain*	getBrain(void) const = 0;
	std::string		getType(void) const;

};
