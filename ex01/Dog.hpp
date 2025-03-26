#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		Brain* getBrain() const;
		void makeSound() const;

		virtual ~Dog();
};
