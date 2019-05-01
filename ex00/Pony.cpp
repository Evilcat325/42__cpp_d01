#include "Pony.hpp"

Pony::Pony(std::string iname) : name(iname)
{
	std::cout << "A Pony named " << iname << " has been created" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << name << " has been neutralized" << std::endl;
}

void ponyOnTheStack(void)
{
	Pony stack = Pony("Stack");
	std::cout << "do some other stuff" << std::endl;
}

void ponyOnTheHeap(void)
{
	Pony *heap = new Pony("Heap");
	std::cout << "do some stuff" << std::endl;
	delete heap;
}
