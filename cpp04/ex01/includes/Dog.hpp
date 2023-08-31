/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:34 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:17:20 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog: public Animal
{

private:
	Brain*	_brain;

public:
	Dog(void);
	Dog(const Dog& obj);
	~Dog(void);

	Dog&		operator=(const Dog& obj);
	void	makeSound(void) const;

};
