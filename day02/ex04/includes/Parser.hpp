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

typedef struct		s_operands
{
	char			op;
	Fixed			nb;
	Fixed			nb2;
}					t_operands;

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
	Parser &		operator=(const Parser &rhs);

	// Parsing
	static int 		checkExpression(const std::string &expr);
	void			skipWhiteSpaces(const std::string &expr);
	Fixed			lookForPriority(const std::string &expr, const Fixed &nb);
	Fixed			lookForNumbers(const std::string &expr);
	Fixed			lookForFactors(const std::string &expr);
	Fixed			lookForTerms(const std::string &expr);

	// Do operations
	static void		do_op(t_operands *operands);

private:

	size_t			_pos;
};

#endif //PARSER_HPP
