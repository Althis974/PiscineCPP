/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:16:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:16:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Token.hpp"
#include "../includes/Printer.hpp"
#include "../includes/Rpn.hpp"
#include "../includes/Solver.hpp"
#include <iostream>

int 				checkExpression(const std::string &expr)
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

int					main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: " << argv[0] << " <expression>" << std::endl;

		return (0);
	}

	if (checkExpression(argv[1]))
	{
		std::cout << "Bad expression." << std::endl;

		return (1);
	}

	try
	{
		std::vector<Token> tokens = Token::tokenize(argv[1]);

		std::vector<Token> postfix = Rpn::postfixize(tokens);

		Solver::solve(postfix);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;

		return (1);
	}

	return (0);
}