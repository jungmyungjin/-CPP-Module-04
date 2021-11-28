//
// Created by 정명진 on 2021/11/28.
//

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() {
	return (type_);
}

WrongAnimal::WrongAnimal() :type_("none_type")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &target) {
	type_ = target.type_;
	return (*this);
};


void WrongAnimal::makeSound()
{
	std::cout <<"[none]" << std::endl;
}

