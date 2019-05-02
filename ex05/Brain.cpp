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

	//if need to uppercase
	//std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	return str;
}
