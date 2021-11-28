#include "Animal.hpp"


std::string Animal::getType() {
	return (type_);
}

Animal::Animal() :type_("none")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;

}

Animal& Animal::operator= (const Animal &target) {
	type_ = target.type_; return (*this);
};


void Animal::makeSound()
{
	std::cout <<"[none]" << std::endl;
}

