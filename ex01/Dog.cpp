#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dogo";
	brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	brain =  new Brain();
	*this = copy;
	std::cout << "Dog copy construct called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignement operator called" << std::endl;
	type = copy.type;
	delete brain;
	brain = new Brain(*(copy.brain));
	return *this;
}

Brain* Dog::getBrain() const
{
	return brain;
}

void Dog::makeSound() const
{
	std::cout << "imitate Ishowspeed" << " ?whatthedoggoing?"<< std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

