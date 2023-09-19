/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 11:25:54 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"

class Cat: public AAnimal
{

private:
	Brain*	_brain;

public:
	Cat(void);
	Cat(const Cat& obj);
	virtual ~Cat(void);

	Cat&		operator=(const Cat& obj);
	AAnimal&	operator=(const AAnimal& obj);
	void		makeSound(void) const;
	Brain*		getBrain(void) const;

};
