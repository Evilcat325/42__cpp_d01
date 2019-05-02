#ifndef SELI_ZOMBIE_HPP
#define SELI_ZOMBIE_HPP

#include <string>
#include <iostream>
// #include <typeinfo>
// was using typeid... to print the name, guess I don't have to
class Zombie
{
private:
	std::string name;
	std::string type;

public:
	Zombie(std::string iname, std::string itype);
	~Zombie();
	void announce(void);
};

#endif
