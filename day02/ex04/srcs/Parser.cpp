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

Parser::Parser() : _pos(0)
{

}

// Copy constructor

Parser::Parser(const Parser &src) : _pos(src._pos)
{

}

// Destructor

Parser::~Parser()
{

}

// Assignation operator overload

Parser &			Parser::operator=(const Parser &rhs)
{
	this->_pos = rhs._pos;

	return (*this);
}

Fixed				Parser::lookForPriority(const std::string &expr,
											const Fixed &nb)
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

Fixed				Parser::lookForNumbers(const std::string &expr)
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

Fixed				Parser::lookForFactors(const std::string &expr)
{
	t_operands operands;

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

Fixed				Parser::lookForTerms(const std::string &expr)
{
	t_operands operands;

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

void				Parser::do_op(t_operands *operands)
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

void				Parser::skipWhiteSpaces(const std::string &expr)
{
	while (expr.at(this->_pos) == ' ')
	{
		if (this->_pos + 1 < expr.size())
			this->_pos++;
		else
			break;
	}
}

int 				Parser::checkExpression(const std::string &expr)
{
	if (expr.empty())
		return (1);

	int nbPar = 0;
	int nbNum = 0;
	int nbOp = 0;

	for (size_t i = 0; i < expr.size(); ++i)
	{
		if (expr[i] == '(')
			nbPar++;
		else if (expr[i] == ')')
			nbPar--;
		else if (isdigit(expr[i]))
		{
			while ((isdigit(expr[i]) && (isdigit(expr[i + 1])
					|| expr[i + 1] == '.')) || (expr[i] == '.'
					&& isdigit(expr[i - 1]) && isdigit(expr[i + 1])))
			{
				++i;
			}
			nbNum++;
		}
		else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '/'
				|| expr[i] == '*')
			nbOp++;
	}

	if (nbPar || (nbNum - nbOp != 1))
		return (1);

	return (0);
}