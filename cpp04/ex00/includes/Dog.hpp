/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:34 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/18 14:38:28 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Dog: public Animal
{

public:
	Dog(void);
	Dog(const Dog& obj);
	~Dog(void);

	Dog&	operator=(const Dog& obj);
	void	makeSound(void) const;

};
