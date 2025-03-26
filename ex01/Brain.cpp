#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain constructor called " << std::endl;
}

Brain::Brain(const Brain& copy)
{
	ideas = new std::string[100];
	*this = copy;
	std::cout << "Brain constructor copy called " << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
	for(int	i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain constructor operator called " << std::endl;
	return *this;
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "Brain and ideas destructor called " << std::endl;
}



