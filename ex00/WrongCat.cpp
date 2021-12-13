/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:37 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 19:04:38 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
