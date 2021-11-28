#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(), type_("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string WrongCat::getType() {
	return (type_);
}
