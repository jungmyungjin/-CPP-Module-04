/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:38:27 by mjung             #+#    #+#             */
/*   Updated: 2021/12/15 16:38:27 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type_ = "Cat";
	brain_ = new Brain();
	std::cout << "Cat constructor" << std::endl;
};

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &target)
{
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	type_ = target.type_;
}

Cat& Cat::operator= (const Cat &target) {
	type_ = target.type_;
	for (int i=0; i<100; i++)
	{
		brain_->ideas[i] = target.brain_->ideas[i];
	}
	return (*this);
};

void Cat::makeSound()
{
	std::cout << "meow~~~ meow~" << std::endl;
}

std::string Cat::getType() {
	return (type_);
}
