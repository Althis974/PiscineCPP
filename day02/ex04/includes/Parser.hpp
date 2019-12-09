/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:55:00 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 16:55:00 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Fixed.hpp"
#include <sstream>

class Parser
{

public:

	// Constructor
	Parser();

	// Copy constructor
	Parser(Parser const &src);

	// Destructor
	~Parser();

	// Assignation operator overload
	Parser &		operator=(Parser const &rhs);

	// Parsing
	void			skipWhiteSpaces(std::string const &expr);
	Fixed			lookForPriority(std::string const &expr, Fixed const &nb);
	Fixed			lookForNumbers(std::string const &expr);
	Fixed			lookForFactors(std::string const &expr);
	Fixed			lookForTerms(std::string const &expr);

	// Do operations
	static void		do_op(struct operands *operands);

private:

	size_t			_pos;
};

struct				operands
{
	char			op;
	Fixed			nb;
	Fixed			nb2;
};

#endif //PARSER_HPP
