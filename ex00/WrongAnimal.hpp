/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:31 by mjung             #+#    #+#             */
/*   Updated: 2021/12/13 19:04:46 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
public:
	// OCCP
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &target) {type_ = target.type_;};

	WrongAnimal& operator= (const WrongAnimal &target);

	void makeSound();
	virtual std::string getType();

protected:
	std::string type_;

private:

};

#endif
