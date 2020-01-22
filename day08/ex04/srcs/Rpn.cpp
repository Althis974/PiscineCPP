/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Rpn.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 16:28:40 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:28:40 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Rpn.hpp"
#include "../includes/Printer.hpp"

std::vector<Token>	Rpn::_vector = std::vector<Token>();
std::stack<Token>	Rpn::_stack = std::stack<Token>();

// Constructor

Rpn::Rpn()
{

}

// Copy constructor

Rpn::Rpn(const Rpn &src)
{
	*this = src;
}

// Destructor

Rpn::~Rpn()
{

}

// Assignation operator overload

Rpn &					Rpn::operator=(const Rpn &rhs)
{
	static_cast<void>(rhs);

	return (*this);
}

int						operatorPriority(const Token &token)
{
	if (token.getType() != Token::OP)
		return (-1);

	switch (token.getValue())
	{
		case '+':
		case '-':
			return (0);

		case '/':
		case '*':
			return (1);

		default:
			return (-1);
	}
}

void					Rpn::loadStack(const Token &token)
{
	switch (token.getType())
	{

		case Token::NUM:
			_vector.push_back(token);
			break;

		case Token::PAR_OPEN:
			_stack.push(token);
			break;

		case Token::PAR_CLOSE:
			while (!(_stack.empty()) && _stack.top().getType() != Token::PAR_OPEN)
			{
				_vector.push_back(_stack.top());
				_stack.pop();
			}

			if (_stack.top().getType() == Token::PAR_OPEN)
				_stack.pop();
			break;

		default:
			while (!(_stack.empty()) &&
					operatorPriority(token) <= operatorPriority(_stack.top()))
			{
				_vector.push_back(_stack.top());
				_stack.pop();
			}

			_stack.push(token);
			break;
	}
}

std::vector<Token>		Rpn::postfixize(std::vector<Token> tokens)
{
	Token token;

	for (std::vector<Token>::iterator it = tokens.begin(); it != tokens.end();
		 ++it)
	{
		token = *it;

		loadStack(token);
	}

	while (!(_stack.empty()))
	{
		_vector.push_back(_stack.top());
		_stack.pop();
	}

	Printer::printPostfix(_vector);

	return (_vector);
}