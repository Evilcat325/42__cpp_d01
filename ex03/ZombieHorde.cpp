#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : size(n)
{
	std::cout << "ZombieHord init" << std::endl;
	zombies = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	std::cout << "ZombieHord out" << std::endl;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < size; i++)
		zombies[i].announce();
}
