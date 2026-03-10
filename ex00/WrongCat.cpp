/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:08:04 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:08:04 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "[WrongCat] Default constructor\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy constructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	std::cout << "[WrongCat] Copy assignment\n";
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor\n";
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] Meee... wait, what?\n";
}
