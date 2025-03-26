#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "W Animal";
	std::cout << " W Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	std::cout << "W Animal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	type = copy.type;
	std::cout << " W Animal assignment opreator colled" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* W Animal sound *" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "W Animal destructor called" << std::endl;
}

