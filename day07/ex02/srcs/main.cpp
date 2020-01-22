/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 00:33:48 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 00:33:48 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main()
{

	std::cout << "\n------------- EMPTY ARRAY ---------------\n" << std::endl;

	Array<int> empty;
	std::cout << "Size = " << empty.size() << "\n" << std::endl;

	std::cout << "\n------------- STRING ARRAY ---------------\n" << std::endl;

	Array<std::string> array(5);
	std::cout << "Size = " << array.size() << "\n" << std::endl;

	array[0] = "hello";
	array[1] = "hallo";
	array[2] = "salut";
	array[3] = "ciao";
	array[4] = "hola";

	for (unsigned int i = 0; i < array.size(); ++i)
		std::cout << array[i] << std::endl;

	std::cout << "\n------------- COPY ARRAY -----------------\n" << std::endl;

	Array<std::string> cpy(array);
	std::cout << "Size = " << cpy.size() << "\n" << std::endl;

	cpy[1] = "Yo";
	cpy[4] = "Ohayo";

	for (unsigned int i = 0; i < cpy.size(); ++i)
		std::cout << cpy[i] << std::endl;

	std::cout << "\n------------- INT ARRAY ------------------\n" << std::endl;

	Array<int> tab(5);
	std::cout << "Size = " << tab.size() << "\n" << std::endl;

	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 7;
	tab[3] = 1;
	tab[4] = 9;

	try
	{
		for (unsigned int i = 0; i < tab.size() + 1; ++i)
			std::cout << tab[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << ": Element is out of the limits!" << std::endl;
	}

	return(0);
}