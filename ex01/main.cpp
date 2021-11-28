#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>
#include <string>

int main()
{
	Animal animal[10];
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	for (int i=0; i<10; i++)
	{
		if (i<5)
			animal[i] = *dog;
		else
			animal[i] = *cat;
	}

	// dog
	std::cout << ">>>>>>deep copy test number > dog" << std::endl;
	std::cout << animal[0].test_ << std::endl;
	animal[0].test_ = 1;
	std::cout << animal[0].test_ << std::endl;
	std::cout << animal[3].test_ << std::endl;

	// cat
	std::cout << ">>>>>>deep copy test number > cat" << std::endl;
	std::cout << animal[5].test_ << std::endl;
	animal[5].test_ = 1;
	std::cout << animal[5].test_ << std::endl;
	std::cout << animal[8].test_ << std::endl;

	for (int i=0; i<10; i++)
	{
		std::cout << animal[i].getType() << std::endl;
	}

	delete dog;
	delete cat;
}
