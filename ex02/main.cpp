/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:39:48 by mjung             #+#    #+#             */
/*   Updated: 2021/12/15 16:39:52 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main()
{
//	Animal test;
	Animal *animal[10];


	for (int i=0; i<10; i++)
	{
		if (i<5)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}

	for (int i=0; i<10; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
	}
}
