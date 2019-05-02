#include "Weapon.hpp"

Weapon::Weapon(std::string itype) : type(itype)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
