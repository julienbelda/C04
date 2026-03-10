/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:10:28 by jul               #+#    #+#             */
/*   Updated: 2026/03/10 16:10:28 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "[WrongCat] Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "[WrongCat] Copy assignment" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] meow?" << std::endl;
}
