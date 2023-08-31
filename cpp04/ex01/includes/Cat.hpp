/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:17:17 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat: public Animal
{

private:
	Brain*	_brain;

public:
	Cat(void);
	Cat(const Cat& obj);
	~Cat(void);

	Cat&		operator=(const Cat& obj);
	void	makeSound(void) const;

};
