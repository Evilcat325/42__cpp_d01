#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
  private:
	Weapon &weapon;
	std::string name;

  public:
	HumanA(std::string iname, Weapon &iweapon);
	~HumanA();
	void attack();
};

#endif /* HUMANA_HPP */
