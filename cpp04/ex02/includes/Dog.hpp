/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:34 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:25:47 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"

class Dog: public AAnimal
{

private:
	Brain*	_brain;

public:
	Dog(void);
	Dog(const Dog& obj);
	virtual ~Dog(void);

	Dog&		operator=(const Dog& obj);
	AAnimal&	operator=(const AAnimal& obj);
	void		makeSound(void) const;
	Brain*		getBrain(void) const;

};
