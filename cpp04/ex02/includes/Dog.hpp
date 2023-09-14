/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:34 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 14:24:41 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Dog: public Animal
{

private:
	Brain*	_brain;

public:
	Dog(void);
	~Dog(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;
	Animal&			operator=(const Animal& obj);
	Dog&			operator=(const Dog& obj);

};
