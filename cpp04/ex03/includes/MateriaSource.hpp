/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:41 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/13 22:02:03 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria*	_materia[4];

public:
	MateriaSource(void);
	~MateriaSource(void);

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);

};
