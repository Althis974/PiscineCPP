/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Filename.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/04 15:03:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 15:03:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Replace
{

public:

	// Constructor
	Replace(const std::string &filename, const std::string &s1,
			const std::string &s2);

	// Destructor
	~Replace();

	// Getter
	std::string		getFilename() const;

	// Arguments checker
	int				checker(std::ifstream *fileStream);

	// Replace occurrences and write it to new file
	int				replaceToNewFile(const std::stringstream &buffer);

	// Create and open new file
	int				writeToNewFile(const std::string &stringBuffer);

private:

	std::string		_filename;
	std::string		_s1;
	std::string		_s2;

};


#endif //REPLACE_HPP
