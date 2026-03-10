/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:09:41 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:09:42 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "[Cat] Default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "[Cat] Copy assignment" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete brain;
}

Brain *Cat::getBrain() const
{
	return (brain);
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Meow!" << std::endl;
}
