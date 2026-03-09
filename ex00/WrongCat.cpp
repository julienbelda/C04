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
