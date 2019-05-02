#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream fin(filename, std::ios::in);
	std::ofstream fout(filename + ".replace", std::ios::out);
	if (!fin.is_open() || !fout.is_open())
	{
		std::cout << "failed to open" << filename
				  << " or " << filename << ".replace" << std::endl;
		return 0;
	}
	std::string line;
	size_t len = s1.length();
	while (std::getline(fin, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1)) != std::string::npos)
			line.replace(pos, len, s2);
		fout << line << std::endl;
	}
	fin.close();
	fout.close();
	return 0;
}
