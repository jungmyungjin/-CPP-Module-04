/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:35 by mjung             #+#    #+#             */
/*   Updated: 2021/12/14 18:40:33 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>
#include <string>

int main()
{
	Animal animal[10];
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	for (int i=0; i<10; i++)
	{
		if (i<5)
			animal[i] = *dog;
		else
			animal[i] = *cat;
	}

	// dog
	std::cout << ">>>>>>deep copy test number > dog" << std::endl;
	delete animal[0].memo_;
	animal[0].memo_ = new std::string("hello");
	std::cout << *animal[0].memo_ << std::endl;
	std::cout << *animal[3].memo_ << std::endl;

	// cat
	std::cout << ">>>>>>deep copy test number > cat" << std::endl;
	delete animal[5].memo_;
	animal[5].memo_ = new std::string("bye");
	std::cout << *animal[5].memo_ << std::endl;
	std::cout << *animal[8].memo_ << std::endl;

	for (int i=0; i<10; i++)
	{
		std::cout << animal[i].getType() << std::endl;
	}

	delete dog;
	delete cat;
}
