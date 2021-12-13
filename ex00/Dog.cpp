/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:56:34 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 18:56:37 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Dog::makeSound()
{
	std::cout << "Woof woof!!" << std::endl;
}

std::string Dog::getType() {
	return (type_);
}