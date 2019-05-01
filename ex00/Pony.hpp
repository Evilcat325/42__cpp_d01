#ifndef SELI_PONY_HPP
#define SELI_PONY_HPP

#include <string>
#include <iostream>

class Pony
{
  private:
	std::string name;

  public:
	Pony(std::string name);
	~Pony();
};

void ponyOnTheHeap();
void ponyOnTheStack();

#endif
