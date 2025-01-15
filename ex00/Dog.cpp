#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dogo";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy construct called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignement operator called" << std::endl;
	type = copy.type;
	return *this;
}

void Dog::makeSound() const
{
	std::count << "imitate Ishowspeed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

