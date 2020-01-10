/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 11:04:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 11:04:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Increment.hpp"
#include "Decrement.hpp"
#include "MoveRight.hpp"
#include "MoveLeft.hpp"
#include "Loop.hpp"
#include "Write.hpp"
#include "Read.hpp"
#include <vector>
#include <sstream>

class Parser
{

public:

	// Constructor
	Parser();

	// Copy constructor
	Parser(const Parser &src);

	// Destructor
	~Parser();

	// Assignation operator overload
	Parser &	operator=(const Parser &rhs);

	// Parse instructions
	void		parse(std::vector<AInstructions *> &vector,
			std::stringstream &stringStream);

private:

	char 		_command;
	Container	_container;
};


#endif //PARSER_HPP
