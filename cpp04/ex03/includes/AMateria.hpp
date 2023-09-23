/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:26:18 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/23 16:22:28 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "./ICharacter.hpp"
#include <iostream>
class ICharacter;

class AMateria
{

protected:
	std::string	_type;

public:
	AMateria(std::string const & type);
	AMateria(const AMateria& obj);
	virtual ~AMateria(void);

	AMateria&	operator=(const AMateria& obj);
	std::string	const & getType() const;
	virtual		AMateria* clone() const = 0;
	virtual		void use(ICharacter& target);

};
