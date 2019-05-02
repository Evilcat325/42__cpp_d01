#include "Logger.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << std::endl;
		return 0;
	}
	std::ofstream fout;
	fout.open(argv[1]);
	if (!fout.is_open())
	{
		std::cout << "Cannot log to " << argv[1] << std::endl;
		return 0;
	}
	Logger some_logger = Logger(fout);

	some_logger.log("Console", "Testing this");
	some_logger.log("File", "Testing that");
	some_logger.log("Knowhere", "What if I put spoiler here");
	return 0;
}
