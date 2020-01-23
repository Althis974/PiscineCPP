/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 16:11:30 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 16:11:30 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Parser.hpp"
#include <iostream>
#include <fstream>

void			mindopen(std::istream &input)
{
	Parser parser;
	std::stringstream stringStream;
	std::vector<AInstructions*> vector;

	stringStream << input.rdbuf();

	parser.parse(vector, stringStream);

	for (std::vector<AInstructions*>::iterator it = vector.begin();
			it != vector.end(); ++it)
	{
		(*it)->execute();
	}

	for (size_t i = 0; i < vector.size(); ++i)
		delete vector[i];
}

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::ifstream input(argv[1]);

		if (input.good())
			mindopen(input);
		else
			std::cout << argv[0] << ": " << argv[1] << ": " << strerror(errno)
					  << std::endl;
	}
	else
		std::cout << "usage: " << argv[0] << " <filename>" << std::endl;

	return (0);
}