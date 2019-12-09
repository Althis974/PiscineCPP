/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:55:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 16:55:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Parser.hpp"

// Constructor

Parser::Parser()
{
	_pos = 0;
}

// Copy constructor

Parser::Parser(Parser const &src) : _pos(src._pos)
{

}

// Destructor

Parser::~Parser()
{

}

// Assignation operator overload

Parser &			Parser::operator=(Parser const &rhs)
{
	this->_pos = rhs._pos;

	return (*this);
}

Fixed				Parser::lookForPriority(std::string const &expr,
											Fixed const &nb)
{
	Fixed tmp = nb;

	if (expr.at(this->_pos) == '(')
	{
		this->_pos++;
		tmp = lookForTerms(expr);
		if (expr.at(this->_pos) == ')')
			this->_pos++;
	}
	return (tmp);
}

Fixed				Parser::lookForNumbers(std::string const &expr)
{
	float result;
	Fixed nb;
	Fixed tmp;

	skipWhiteSpaces(expr);

	if ((tmp = lookForPriority(expr, nb)) != nb)
		return (tmp);

	std::stringstream stringStream(expr.substr(this->_pos));
	stringStream >> result;
	this->_pos += stringStream.tellg();

	return (Fixed(result));
}

Fixed				Parser::lookForFactors(std::string const &expr)
{
	operands operands;

	operands.nb = lookForNumbers(expr);

	while (this->_pos < expr.size())
	{
		skipWhiteSpaces(expr);

		operands.op = expr.at(this->_pos);
		if (operands.op != '/' && operands.op != '*')
			return (operands.nb);

		this->_pos++;

		operands.nb2 = lookForNumbers(expr);

		do_op(&operands);
	}

	return (operands.nb);
}

Fixed				Parser::lookForTerms(std::string const &expr)
{
	operands operands;

	operands.nb = lookForFactors(expr);

	while (this->_pos < expr.size())
	{
		skipWhiteSpaces(expr);

		operands.op = expr.at(this->_pos);
		if (operands.op != '+' && operands.op != '-')
			return (operands.nb);

		this->_pos++;

		operands.nb2 = lookForFactors(expr);

		do_op(&operands);
	}

	return (operands.nb);
}

void				Parser::do_op(struct operands *operands)
{
	if (operands->op == '+')
		operands->nb = operands->nb + operands->nb2;
	else if (operands->op == '-')
		operands->nb = operands->nb - operands->nb2;
	else if (operands->op == '/')
		operands->nb = operands->nb / operands->nb2;
	else if (operands->op == '*')
		operands->nb = operands->nb * operands->nb2;
}

void				Parser::skipWhiteSpaces(std::string const &expr)
{
	while (expr.at(this->_pos) == ' ')
	{
		if (this->_pos + 1 < expr.size())
			this->_pos++;
		else
			break;
	}
}