/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:29:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:29:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>
#include <list>


int main()
{
	std::list<int> list;

	list.push_back(12);
	list.push_back(7);
	list.push_back(42);

	try
	{
		std::cout << easyfind(list, 7) << std::endl;
		std::cout << easyfind(list, 42) << std::endl;
		std::cout << easyfind(list, 15) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " : couldn't find value" << std::endl;
	}
}

