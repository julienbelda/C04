/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:09:33 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:09:34 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "[Brain] Copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	std::cout << "[Brain] Copy assignment" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor" << std::endl;
}

