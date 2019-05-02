#include "Brain.hpp"

Brain::Brain()
{
	powerlever = 9000;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::string str;
	std::stringstream s(str);
	s << this;
	s >> str;
	return str;
}
