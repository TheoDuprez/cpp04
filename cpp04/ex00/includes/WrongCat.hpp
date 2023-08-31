/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:10:00 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 14:28:25 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

public:
	WrongCat(void);
	WrongCat(const WrongCat& obj);
	~WrongCat(void);

	WrongCat&		operator=(const WrongCat& obj);
	void	makeSound(void) const;

};
