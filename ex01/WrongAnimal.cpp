/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:09:05 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:09:05 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[WrongAnimal] Copy assignment" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] ???" << std::endl;
}
