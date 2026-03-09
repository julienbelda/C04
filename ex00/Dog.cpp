#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "[Dog] Default constructor\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor\n";
}

Dog &Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "[Dog] Copy assignment\n";
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor\n";
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Woof!\n";
}
