#include "Human.hpp"

Human::Human(){};
Human::~Human(){};

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee Attacking " << target << std::endl;
}
void Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged Attacking " << target << std::endl;
}
void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating Shout at " << target << std::endl;
}
void Human::action(std::string const &action_name, std::string const &target)
{
	static std::string action_name_list[] = {"Melee",
											 "Ranged",
											 "Intimidating"};
	static Human_AttackFn dispatcher[] = {&Human::meleeAttack,
										  &Human::rangedAttack,
										  &Human::intimidatingShout};
	for (int i = 0; i < 3; i++)
	{
		if (action_name == action_name_list[i])
		{
			(this->*dispatcher[i])(target);
			return;
		}
	}
	std::cout << "Invalid Action: available Action : Melee Ranged Intimidating" << std::endl
			  << action_name << " at " << target << " failed." << std::endl;
}
