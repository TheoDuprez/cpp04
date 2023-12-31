/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:54 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/27 11:41:08 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{

public:
	Brain(void);
	Brain(const Brain& obj);
	~Brain(void);

	Brain& 		operator=(const Brain& obj);
	void		setIdea(int idx, std::string idea);
	std::string	getIdea(int idx) const;

private:
	std::string	_ideas[100];

};
