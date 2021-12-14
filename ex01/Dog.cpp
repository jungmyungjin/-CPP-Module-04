/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:25 by mjung             #+#    #+#             */
/*   Updated: 2021/12/14 18:40:39 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type_ = "Dog";
	brain_ = new Brain();
	std::cout << "Dog constructor" << std::endl;
};

Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &target)
{
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	type_ = target.type_;
}

Dog& Dog::operator= (const Dog &target) {
	type_ = target.type_;
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	return (*this);
};


void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

std::string Dog::getType() {
	return (type_);
}
