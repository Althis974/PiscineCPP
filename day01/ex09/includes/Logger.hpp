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
	Logger(const std::string &filename);

	// Destructor
	~Logger();

	// Make log entry with message
	void			log(const std::string &dest, const std::string &message);

private:

	// Log to standard output
	void			logToConsole(const std::string &message);

	// Log to file
	void			logToFile(const std::string &message);

	// Make message be a log entry
	std::string		makeLogEntry(const std::string &message) const;

	std::string		_filename;
};


#endif //LOGGER_HPP
