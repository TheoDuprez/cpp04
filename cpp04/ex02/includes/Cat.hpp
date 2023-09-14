/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 22:08:51 by tduprez          ###   ########lyon.fr   */
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
	~Cat(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;
	Animal&		operator=(const Animal& obj);
	Cat&		operator=(const Cat& obj);
};
