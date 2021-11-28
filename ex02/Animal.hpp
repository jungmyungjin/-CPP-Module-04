
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

	virtual void makeSound() = 0;
	virtual std::string getType();

protected:
	std::string type_;

private:

};

#endif
