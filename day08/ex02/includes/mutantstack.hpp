/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mutantstack.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/08 13:10:04 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/08 13:10:04 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>

template <typename T>
class	MutantStack : public std::stack<T>
{

public:

	// Constructor
	MutantStack()
	{

	}

	// Copy constructors
	MutantStack(const std::stack<T> &src): std::stack<T>(src)
	{

	}

	MutantStack(const MutantStack &src) : std::stack<T>(src)
	{

	}

	// Destructor
	virtual ~MutantStack()
	{

	}

	// Assignation operator overload
	MutantStack &		operator=(const MutantStack &rhs)
	{
		_mutant = rhs._mutant;

		return (*this);
	}

	// Iterator
	typedef typename	std::vector<T>::iterator iterator;

	// Return first element of iterator
	iterator			begin()
	{
		return (_mutant.begin());
	}

	// Return last element of iterator
	iterator			end()
	{
		return (_mutant.end());
	}

	// Adds a new element at the end
	void				push(T x)
	{
		_mutant.push_back(x);
	}

	// Returns a reference to the top element
	T					top()
	{
		return (*(_mutant.end() - 1));
	}

	// Removes the element on top of the stack
	void				pop()
	{
		_mutant.pop_back();
	}

private:

	std::vector<T>	_mutant;
};


#endif //MUTANTSTACK_HPP
