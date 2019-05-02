#ifndef SELI_ZOMBIEEVENT_HPP
#define SELI_ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
  private:
	std::string type;

  public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
};

#endif
