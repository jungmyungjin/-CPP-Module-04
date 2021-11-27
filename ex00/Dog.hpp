
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :  public Animal
{
	// OCCP
public:
	Dog();
	~Dog();
	Dog(const Dog &target);
	Dog& operator=(const Dog &target);

	std::string getType();
	void makeSound();
protected:
	std::string type_;

};

#endif
