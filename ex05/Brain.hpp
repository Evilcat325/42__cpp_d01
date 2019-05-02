#ifndef SELI_BRAIN_HPP
#define SELI_BRAIN_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Brain
{
private:
	int powerlever;

public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif
