#include "Cat.hpp"

Cat::Cat(void) : Animal(), type_("Cat")
{
	std::cout << "Cat constructor" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string Cat::getType() {
	return (type_);
}
