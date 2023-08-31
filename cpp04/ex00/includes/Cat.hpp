/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:27:32 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Cat: public Animal
{

public:
	Cat(void);
	Cat(const Cat& obj);
	~Cat(void);

	Cat&		operator=(const Cat& obj);
	void	makeSound(void) const;

};
