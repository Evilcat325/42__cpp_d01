#include "Logger.hpp"

Logger::Logger(std::ofstream &ifout) : fout(ifout)
{
}

Logger::~Logger()
{
}

void Logger::log(std::string const &dest, std::string const &message)
{
	static std::string logtype_list[] = {"Console", "File"};
	static log_fn dispatcher[] = {&Logger::logToConsole, &Logger::logToFile};
	for (int i = 0; i < 3; i++)
	{
		if (dest == logtype_list[i])
		{
			(this->*dispatcher[i])(makeLogEntry(message));
			return;
		}
	}
	std::cout << "Invalid log type" << std::endl;
	std::cout << "Log dest : " << dest << " failed." << std::endl;
}

std::string Logger::getTimeStamp(void)
{
	static time_t t;
	static struct tm *now;
	std::string str;
	std::stringstream s(str);
	if (!now)
	{
		t = time(0);
		now = localtime(&t);
	}

	s << '[' << now->tm_year + 1900
	  << std::setw(2) << std::setfill('0') << now->tm_mon
	  << std::setw(2) << std::setfill('0') << now->tm_mday
	  << '_'
	  << std::setw(2) << std::setfill('0') << now->tm_hour
	  << std::setw(2) << std::setfill('0') << now->tm_min
	  << std::setw(2) << std::setfill('0') << now->tm_sec
	  << "] ";
	s >> str;
	return str;
}

void Logger::logToConsole(std::string output)
{
	std::cout << output << std::endl;
}
void Logger::logToFile(std::string output)
{
	fout << output << std::endl;
}
std::string Logger::makeLogEntry(std::string message)
{
	return getTimeStamp() + message;
}
