#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	type = copy.type;
	std::cout << "Animal assignment opreator colled" << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "* Animal sound *" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
