/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Solver.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 14:08:56 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 14:08:56 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Solver.hpp"
#include "../includes/Token.hpp"
#include "../includes/Printer.hpp"

// Constructor

Solver::Solver()
{

}

// Copy constructor

Solver::Solver(const Solver &src)
{
	*this = src;
}

// Destructor

Solver::~Solver()
{

}

// Assignation operator overload

Solver &		Solver::operator=(const Solver &rhs)
{
	static_cast<void>(rhs);

	return (*this);
}

Token			doOp(Token &a, Token &b, Token &op)
{
	switch (op.getValue())
	{
		case '+':
			return (Token(a.getValue() + b.getValue()));

		case '-':
			return (Token(a.getValue() - b.getValue()));

		case '/':
			if (b.getValue() == 0)
				throw std::runtime_error("Division by zero");

			return (Token(a.getValue() / b.getValue()));

		case '*':
			return (Token(a.getValue() * b.getValue()));

		default:
			throw std::runtime_error("Unknown operation");
	}
}

void			Solver::solve(std::vector<Token> vector)
{
	std::stack<Token> stack;

	while (!vector.empty())
	{
		Token token = vector.front();
		vector.erase(vector.begin());

		if (token.getType() == Token::OP)
		{
			Token b = stack.top();
			stack.pop();

			Token a = stack.top();
			stack.pop();

			stack.push(doOp(a, b, token));

			Printer::printSteps(token, stack);
		}
		else
		{
			stack.push(token);

			Printer::printSteps(token, stack);
		}
	}

	std::cout << "Result: " << stack.top().getValue() << std::endl;
}