/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:09:05 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:23:45 by tduprez          ###   ########lyon.fr   */
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
	Cure(const Cure& obj);
	~Cure(void);

	Cure&		operator=(const Cure& obj);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
