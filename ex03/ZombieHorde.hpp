#ifndef SELI_ZOMBIEHORDE_HPP
#define SELI_ZOMB

#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int size;
	Zombie *zombies;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce(void);
};

#endif
