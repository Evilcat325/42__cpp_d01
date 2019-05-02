#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string iname);
	~HumanB();
	void setWeapon(Weapon &iweapon);
	void attack();
};

#endif /* HUMANB_HPP */
