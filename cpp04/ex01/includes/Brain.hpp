/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:09 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/31 15:12:05 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Brain
{

protected:
	std::string	_ideas[100];

public:
	Brain(void);
	Brain(const Brain& obj);
	~Brain(void);

	Brain& operator=(const Brain& obj);
};
