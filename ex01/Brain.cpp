#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "[Brain] Copy constructor" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	std::cout << "[Brain] Copy assignment" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor" << std::endl;
}

