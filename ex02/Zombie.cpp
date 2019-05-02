#include "Zombie.hpp"

Zombie::Zombie(std::string iname, std::string itype) : name(iname), type(itype)
{
}

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> "
			  << "Braiiiiiiinnnssss..." << std::endl;
}
