#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify() const
{
	return b.identify();
}

const Brain &Human::getBrain() const
{
	return b;
}
