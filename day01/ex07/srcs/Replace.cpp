/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Filename.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/04 15:03:14 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 15:03:14 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

// Constructor

Replace::Replace(std::string const &filename, std::string const &s1,
		std::string const &s2) : _filename(filename), _s1(s1), _s2(s2)
{

}

// Destructor

Replace::~Replace()
{

}

// Getter

std::string		Replace::getFilename() const
{
	return this->_filename;
}

// Arguments checker

int 			Replace::checker(std::ifstream *inputFileStream)
{

	if (inputFileStream->fail())
	{
		std::cout << "Error: could not open file \"" << this->_filename
		<< "\"" << std::endl;
		return (1);
	}

	if (this->_s1.empty() || this->_s2.empty())
	{
		std::cout << "Error: strings must not be empty." << std::endl;
		return (1);
	}

	return (0);
}

// Replace occurrences and write it to new file

int			Replace::replaceToNewFile(std::stringstream const &buffer)
{
	size_t occurrencesPos;
	std::string stringBuffer = buffer.str();;

	// Replace occurrences
	while ((occurrencesPos = stringBuffer.find(this->_s1))
			!= std::string::npos)
	{
		stringBuffer.replace(occurrencesPos, this->_s1.length(),
							 this->_s2);
	}

	if (writeToNewFile(stringBuffer))
		return (1);

	return (0);
}

int 		Replace::writeToNewFile(std::string const &stringBuffer)
{
	// Create and open new file
	std::ofstream outputFileStream(this->_filename + ".replace");

	if (outputFileStream.fail())
	{
		std::cout << "Error: could not open file \"" << this->_filename
				  << ".replace\"" <<  std::endl;
		return (1);
	}

	// Write to new file
	outputFileStream << stringBuffer;

	outputFileStream.close();

	return 0;
}

