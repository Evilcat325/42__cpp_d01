#include "HumanA.hpp"

HumanA::HumanA(std::string iname, Weapon &iweapon) : weapon(iweapon), name(iname)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
