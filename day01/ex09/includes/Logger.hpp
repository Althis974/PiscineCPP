/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Logger.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 14:31:32 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 14:31:32 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define	LOGGER_HPP

#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>

class Logger
{

public:

	// Constructor
	Logger(std::string const &filename);

	// Destructor
	~Logger();

	// Make log entry with message
	void log(std::string const &dest, std::string const &message);

private:

	// Log to standard output
	void logToConsole(std::string const &message);

	// Log to file
	void logToFile(std::string const &message);

	// Make message be a log entry
	std::string makeLogEntry(std::string const &message) const;

	std::string _filename;
};


#endif //LOGGER_HPP
