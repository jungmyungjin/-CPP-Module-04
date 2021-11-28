#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type_ = "Cat";
	std::cout << "Cat constructor" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &target)
{
	type_ = target.type_;
}

Cat& Cat::operator= (const Cat &target) {
	type_ = target.type_;
	return (*this);
};

void Cat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string Cat::getType() {
	return (type_);
}
