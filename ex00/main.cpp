#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

int main(void)
{
//	 Animal* meta = new Animal();
//	 Animal* j = new Dog();
//	 Animal* i = new Cat();
//
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//
//	delete meta;
//	delete j;
//	delete i;

	// WrongAnimal
	{
//		WrongAnimal* meta = new WrongAnimal();
		WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
//		meta->makeSound();

//		delete meta;
		delete i;
	}

	return (0);
}