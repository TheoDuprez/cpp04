/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/28 12:55:23 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Cat: public Animal
{

private:
	Brain*	_brain;

public:
	Cat(void);
	Cat(const Cat& obj);
	virtual ~Cat(void);

	Cat&	operator=(const Cat& obj);
	Animal&	operator=(const Animal& obj);
	void	makeSound(void) const;
	Brain*	getBrain(void) const;

};
