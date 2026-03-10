/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:08:12 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:08:13 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal] Default constructor" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "[Animal] Copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[Animal] Copy assignment" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor" << std::endl;
}

const std::string &Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "[Animal] Generic animal sound" << std::endl;
}
