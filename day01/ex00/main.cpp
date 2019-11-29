/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 15:08:30 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 15:08:30 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

// Allocates a pony on the stack

void		ponyOnTheStack()
{
	Pony	buttStallion("Butt Stallion");

	std::cout << "Name  : " << buttStallion.getName() << std::endl;
	buttStallion.setAge("18");
	std::cout << "Age   : " << buttStallion.getAge() << std::endl;
	buttStallion.setColor("Diamond");
	std::cout << "Color : " << buttStallion.getColor() << std::endl;
}

// Allocates a pony on the heap.

void		ponyOnTheHeap()
{
	Pony	*pissForBrains = new Pony("Piss-For-Brains");

	std::cout << "Name  : " << pissForBrains->getName() << std::endl;
	pissForBrains->setAge("1");
	std::cout << "Age   : " << pissForBrains->getAge() << std::endl;
	pissForBrains->setColor("Purple-Pink");
	std::cout << "Color : " << pissForBrains->getColor() << std::endl;

	delete pissForBrains;
}

int				main()
{
	std::cout << "\n\n--- Pony on the Stack ---\n" << std::endl;
	ponyOnTheStack();
	std::cout << "\n\n--- Pony on the Heap ---\n" << std::endl;
	ponyOnTheHeap();

	return (0);
}

