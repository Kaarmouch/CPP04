#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	//const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();
	
	std::cout << std::endl;
	Dog d1;
	Dog d2(d1);
	
	std::cout << "cerveau chien 1" << d1.getBrain() << std::endl;
	std::cout << "cerveau chien 2" << d2.getBrain() << std::endl;
	std::cout << std::endl;

	Cat c1;
        Cat c2(c1);

        std::cout << "cerveau chat 1 " << d1.getBrain() << std::endl;
        std::cout << "cerveau chat 2 " << d2.getBrain() << std::endl;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}
