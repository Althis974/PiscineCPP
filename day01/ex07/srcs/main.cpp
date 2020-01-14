/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/04 12:43:58 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 12:43:58 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Replace.hpp"
#include <iostream>
#include <fstream>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;

		return (1);
	}
	else
	{
		// Get parameters
		Replace replace(argv[1], argv[2], argv[3]);

		std::stringstream buffer;

		// Checks arguments
		std::ifstream inputFileStream(replace.getFilename());

		if (replace.checker(&inputFileStream))
			return (1);

		// Read file
		buffer << inputFileStream.rdbuf();

		// Replace occurrences and write it to new file
		if (replace.replaceToNewFile(buffer))
			return (1);

		inputFileStream.close();
	}

	return (0);
}