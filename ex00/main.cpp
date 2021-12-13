/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:03:26 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 19:03:29 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main(void)
{
	// Animal
	std::cout << "[[Animal]]" << std::endl;
	{
		 Animal* meta = new Animal();
		 Animal* j = new Dog();
		 Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	// WrongAnimal
	std::cout << "\n[[WrongAnimal]]" << std::endl;
	{
		WrongAnimal* meta = new WrongAnimal();
		WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
	}

	return (0);
}