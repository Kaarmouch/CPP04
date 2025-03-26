#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Kitten";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy construct called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat assignement operator called" << std::endl;
	type = copy.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meoooww said" << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

