#include "Dog.hpp"


Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	std::cout << "Dog constructor" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &target)
{
	type_ = target.type_;
}

Dog& Dog::operator= (const Dog &target) {
	type_ = target.type_;
	return (*this);
};


void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

std::string Dog::getType() {
	return (type_);
}