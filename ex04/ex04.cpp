#include <string>
#include <iostream>

int main()
{
	std::string stritself = "HI THIS IS BRAIN";
	std::string *strptr = &stritself;
	std::string &strref = stritself;
	std::cout << *strptr << std::endl;
	std::cout << strref << std::endl;
	return 0;
}
