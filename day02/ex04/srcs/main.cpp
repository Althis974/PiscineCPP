/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:55:23 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 16:55:23 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Parser.hpp"
#include <iostream>

int 	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Parser parser;

		if (Parser::checkExpression(argv[1]))
		{
			std::cout << "Bad expression." << std::endl;

			return (1);
		}

		std::cout << parser.lookForTerms(argv[1]) << std::endl;
	}
	else
		std::cout << "Usage: " << argv[0] << " (expression)" << std::endl;

	return (0);
}