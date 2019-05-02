#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string line;
	if (argc < 2)
	{
		while (std::getline(std::cin, line))
			std::cout << line << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		std::ifstream fin;
		fin.open(argv[i]);
		if (!fin.is_open())
			std::cerr << "cat9tails: " << argv[i] << ": No such file or directory" << std::endl;
		else
		{
			while (std::getline(fin, line))
				std::cout << line << std::endl;
		}
	}
	return 0;
}
