#pragma once

#include "Animal.hpp"

#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		Brain* getBrain() const;
		void makeSound() const;
		virtual ~Cat();
};

