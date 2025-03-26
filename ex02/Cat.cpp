#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Kitten";
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain();
	*this = copy;
	std::cout << "Cat copy construct called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat assignement operator called" << std::endl;
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meoooww said" << type << std::endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

