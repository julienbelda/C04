#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] Default constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "[WrongAnimal] Copy constructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other) {
		type = other.type;
	}
	std::cout << "[WrongAnimal] Copy assignment\n";
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor\n";
}

const std::string& WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] ???\n";
}
