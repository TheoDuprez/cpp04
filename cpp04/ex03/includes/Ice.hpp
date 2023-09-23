/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:43:42 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:34:52 by tduprez          ###   ########lyon.fr   */
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
	Ice(const Ice& obj);
	~Ice(void);

	Ice&		operator=(const Ice& obj);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
