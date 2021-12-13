/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:25 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 19:05:21 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

