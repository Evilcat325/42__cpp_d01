#include "Logger.hpp"

int main()
{
	Logger some_logger = Logger("log");
	some_logger.log("Console", "Testing this");
	some_logger.log("File", "Testing that");
	some_logger.log("Knowhere", "What if I put spoiler here");
	return 0;
}
