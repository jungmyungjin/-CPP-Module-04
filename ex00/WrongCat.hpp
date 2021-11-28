#ifndef WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

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

