/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Logger.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 14:31:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 14:31:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Logger.hpp"

// Constructor

Logger::Logger(std::string const &filename) : _filename(filename)
{

}

// Destructor

Logger::~Logger()
{

}

// Log to standard output

void Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message);
}

// Log to file

void Logger::logToFile(std::string const &message)
{
	std::ofstream outputFileStream(this->_filename);

	outputFileStream << makeLogEntry(message);
}

// // Make message be a log entry

std::string Logger::makeLogEntry(std::string const &message) const
{
	time_t t = time(nullptr);
	tm* timePtr = localtime(&t);
	std::stringstream stringStream;

	stringStream << "[" << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_year + 1900 << "-"
				 << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_mon + 1 << "-"
				 << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_mday << " | "
				 << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_hour << ":"
				 << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_min << ":"
				 << std::setw(2) << std::right << std::setfill('0')
				 << timePtr->tm_sec << "] > " << message << " <" << std::endl;

	return stringStream.str();
}

// Pointer to member

typedef void(Logger::*logAction) (std::string const &);

// Make log entry with message

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string destinationNames[2] = {
			"File",
			"Console"
	};

	logAction destinations[2] = {
			&Logger::logToFile,
			&Logger::logToConsole
	};

	for (int i = 0; i < 2; ++i)
	{
		if (destinationNames[i] == dest)
			(this->*destinations[i])(message);
	}
}