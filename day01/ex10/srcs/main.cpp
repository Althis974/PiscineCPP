/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 15:18:13 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 15:18:13 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <dirent.h>

void	stream(std::istream &input)
{
	std::cout << input.rdbuf();
}

int		main(int argc, char **argv)
{
	if (argc == 1 || (argc == 2 && std::string(argv[1]) == "--"))
	{
		stream(std::cin);

		return (0);
	}

	for (int i = 1; i < argc; ++i)
	{
		std::string		args = argv[i];
		DIR	*			dir = opendir(args.c_str());

		if (i == 1 && args == "--")
			continue;

		if (args == "-")
			stream(std::cin);
		else
		{
			std::ifstream inputFileStream(args);

			if (inputFileStream.good() && dir == nullptr)
				stream(inputFileStream);
			else if (dir != nullptr)
			{
				closedir(dir);
				std::cout << argv[0] << ": " << args << ": Is a directory"
						  << std::endl;
			}
			else
				std::cout << argv[0] << ": " << args << ": "
						  << strerror(errno) << std::endl;
		}
	}

	return (0);
}