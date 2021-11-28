#include "Animal.hpp"
#include "Dog.hpp"

std::string Animal::getType() {
	return (type_);
}

Animal::Animal() :type_("none"), test_(0)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &target)
{
	type_ = target.type_;
}

Animal& Animal::operator= (const Animal &target) {
	type_ = target.type_;
	return (*this);
};


void Animal::makeSound()
{
	std::cout <<"[quiet]" << std::endl;
}

