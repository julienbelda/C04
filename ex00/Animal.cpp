/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:07:11 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:07:14 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal] Default constructor\n";
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "[Animal] Copy constructor\n";
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "[Animal] Copy assignment\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor\n";
}

const std::string& Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "[Animal] Generic sound...\n";
}
