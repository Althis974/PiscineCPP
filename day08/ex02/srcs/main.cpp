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

#include "../includes/mutantstack.hpp"
#include <iostream>
#include <list>

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

	std::cout << "\n--------------- WITH LIST -----------------\n" << std::endl;

	std::list<int> list;

	list.push_front(5);
	list.push_front(17);
	std::cout << list.front() << std::endl;

	list.pop_front();
	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator iter = list.begin();
	std::list<int>::iterator itere = list.end();

	++iter;
	--iter;
	while (iter != itere)
	{
		std::cout << *iter << std::endl;
		++iter;
	}

	std::cout << "\n--------------- DERIVED PART --------------\n" << std::endl;

	MutantStack<int>	mutantStack(a);

	for (int i = 1; i < 43; ++i)
		mutantStack.push(i);

	it = mutantStack.begin();
	ite = mutantStack.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return (0);
}

