/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:43:42 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/13 17:18:35 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"
#include "./ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{

public:
	Ice(void);

	AMateria*	clone() const;
	void		use(ICharacter& target);
};
