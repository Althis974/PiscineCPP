/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Printer.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 15:56:57 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:56:57 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Printer.hpp"
#include "../includes/Token.hpp"

// Constructors

Printer::Printer()
{

}

// Copy constructor

Printer::Printer(const Printer &src)
{
	*this = src;
}

// Destructor

Printer::~Printer()
{

}

// Assignation operator overload

Printer &		Printer::operator=(const Printer &rhs)
{
	static_cast<void>(rhs);

	return (*this);
}

void			Printer::printToken(std::vector<Token> vector)
{
	std::cout << "Tokens: ";

	for (std::vector<Token>::iterator it = vector.begin(); it != vector.end();
		 ++it)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}

void			Printer::printPostfix(std::vector<Token> vector)
{
	std::cout << "Postfix: ";

	for (std::vector<Token>::iterator it = vector.begin(); it != vector.end();
		 ++it)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}

void			Printer::printStack(std::stack<Token> stack)
{
	size_t len = stack.size();

	for (size_t i = 0; i < len; ++i)
	{
		std::cout << stack.top().getValue() << (i < len - 1 ? " " : "");

		stack.pop();
	}
}

std::string		getOperationTitle(const Token &token)
{
	if (token.getType() != Token::OP)
		return ("Push");

	switch (token.getValue())
	{
		case '+':
			return ("Add");

		case '-':
			return ("Substract");

		case '/':
			return ("Divide");

		case '*':
			return ("Multiply");

		default:
			return ("Unknown");
	}
}

void			Printer::printSteps(Token &token, const std::stack<Token>
        																&stack)
{
	std::cout << "I " << std::left << std::setw(10) << token << " | Op "
			  << std::setw(10) << std::left << getOperationTitle(token)
			  << " | ST ";

	Printer::printStack(stack);

	std::cout << "]" <<  std::endl;
}