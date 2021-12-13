/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:40 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 19:04:40 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat :  public WrongAnimal
{
	// OCCP
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &target);
	WrongCat& operator=(const WrongCat &target);

	std::string getType();
	void makeSound();
protected:
	std::string type_;

};


#endif

