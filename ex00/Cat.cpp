/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:56:16 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 18:56:17 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
