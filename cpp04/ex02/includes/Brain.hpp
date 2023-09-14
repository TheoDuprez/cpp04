/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:54 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/12 14:10:47 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{

public:
	Brain(void);
	Brain(const Brain& obj);
	~Brain(void);

	Brain& operator=(const Brain& obj);
	std::string	ideas[100];

};
