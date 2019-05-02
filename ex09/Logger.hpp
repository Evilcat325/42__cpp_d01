#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

class Logger
{
  private:
	void logToConsole(std::string output);
	void logToFile(std::string output);
	std::string makeLogEntry(std::string message);
	std::string getTimeStamp(void);
	std::ofstream fout;
	Logger &operator=(const Logger &);

  public:
	Logger(std::string ilogfile);
	~Logger();
	void log(std::string const &dest, std::string const &message);
};

typedef void (Logger::*log_fn)(std::string output);

#endif /* LOGGER_HPP */
