/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:38:11 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/19 12:46:15 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"

class IMateriaSource
{

public:
	virtual	~IMateriaSource() {}
	virtual	void learnMateria(AMateria*) = 0;
	virtual	AMateria* createMateria(std::string const & type) = 0;

};
