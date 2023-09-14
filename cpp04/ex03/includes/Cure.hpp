/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:09:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/13 17:18:39 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"
#include "./ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{

public:
	Cure(void);

	AMateria*	clone() const;
	void		use(ICharacter& target);
};
