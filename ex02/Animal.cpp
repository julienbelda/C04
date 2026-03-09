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
