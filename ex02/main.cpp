#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

// the string is actually copied as pass and return by value
// -O2 might optimize it but still in a safe way
// to hide the new delete form user
std::string gen_random_name(const int maxlen)
{
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	std::string name;
	std::stringstream s(name);
	const int len = (std::rand() % maxlen) + 1;
	for (int i = 0; i < len; ++i)
		s << alphanum[std::rand() % (sizeof(alphanum) - 1)];
	s >> name;
	return name;
}

void randomChump(ZombieEvent &ze)
{
	Zombie *z = ze.newZombie(gen_random_name(50));
	z->announce();
	delete z;
}

int main(int argc, char *argv[])
{
	std::srand(std::time(nullptr));
	if (argc != 2)
	{
		std::cout << std::endl;
		return 0;
	}
	ZombieEvent ze = ZombieEvent();
	ze.setZombieType(argv[1]);
	for (int i = 0; i < 10; i++)
		randomChump(ze);
	return 0;
}
