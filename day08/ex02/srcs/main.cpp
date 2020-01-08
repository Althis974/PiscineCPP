/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/08 13:11:12 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 13:11:12 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "../includes/mutantstack.hpp"

int main()
{
	std::cout << "\n--------------- MAIN PART -----------------\n" << std::endl;

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> a(mstack);

	std::cout << "\n--------------- DERIVED PART --------------\n" << std::endl;

	MutantStack<int>	mutantstack(a);

	for (int i = 1; i < 43; ++i)
		mutantstack.push(i);

	it = mutantstack.begin();
	ite = mutantstack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return (0);
}

