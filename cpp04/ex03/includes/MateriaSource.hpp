/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:41:41 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:38:32 by tduprez          ###   ########lyon.fr   */
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
	MateriaSource(const MateriaSource& obj);
	~MateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& obj);
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(const std::string& type);

};
