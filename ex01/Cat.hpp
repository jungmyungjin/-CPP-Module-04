#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	// OCCP
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &target);
	Cat& operator=(const Cat &target);

	std::string getType();
	void makeSound();

};

#endif
