#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Kitten";
	std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "Wrong Cat copy construct called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "Wrong Cat assignement operator called" << std::endl;
	type = copy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}


