#ifndef SELI_HUMAN_HPP
#define SELI_HUMAN_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Brain.hpp"

class Human
{
private:
	Brain b;

public:
	Human();
	~Human();
	std::string identify() const;
	const Brain &getBrain() const;
};

#endif
