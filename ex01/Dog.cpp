/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:08:41 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:08:42 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "[Dog] Default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "[Dog] Copy assignment" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete brain;
}

Brain *Dog::getBrain() const
{
	return (brain);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Woof!" << std::endl;
}
