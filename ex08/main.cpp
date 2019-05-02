#include "Human.hpp"

int main()
{
	Human subject;
	subject.action("Melee", "Some guy");
	subject.action("Ranged", "Other guy");
	subject.action("Intimidating", "Wrong guy");
	subject.action("Retreat", "Wrong guy");
	return 0;
}
