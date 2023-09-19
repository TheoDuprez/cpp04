/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:54 by tduprez           #+#    #+#             */
/*   Updated: 2023/09/18 13:30:23 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
