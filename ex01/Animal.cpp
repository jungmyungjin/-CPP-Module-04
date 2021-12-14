/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:33:52 by mjung             #+#    #+#             */
/*   Updated: 2021/12/14 18:41:35 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

std::string Animal::getType() {
	return (type_);
}

Animal::Animal() :type_("none")
{
	std::cout << "Animal constructor" << std::endl;
	memo_ = new std::string("none");
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
	delete memo_;
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

