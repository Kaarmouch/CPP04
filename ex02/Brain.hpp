#pragma once

#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	*ideas;
	public:
		Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();
};

