
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

class Animal
{
public:
	// OCCP
	Animal();
	virtual ~Animal();
	Animal(const Animal &target);

	Animal& operator= (const Animal &target);

	virtual void makeSound();
	virtual std::string getType();

	int test_;

protected:
	std::string type_;

private:

};

#endif
