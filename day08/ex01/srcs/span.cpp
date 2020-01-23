/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:46:21 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:46:21 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/span.hpp"

// Constructor

Span::Span(unsigned int n) : _n(n)
{
	this->_vector.reserve(n);
}

// Copy constructor

Span::Span(const Span &src) : _n(src._n), _vector(src._vector)
{

}

// Destructor

Span::~Span()
{

}

// Assignation operator overload

Span &					Span::operator=(const Span &rhs)
{
	this->_n = rhs._n;
	this->_vector = rhs._vector;

	return (*this);
}

// Store a number

void					Span::addNumber(int n)
{
	if (this->_vector.size() < this->_n)
		this->_vector.push_back(n);
	else
		throw std::length_error("\n/!\\ Limit reached!\n");
}

void					swap(int *x, int *y)
{
	int		tmp = *x;

	*x = *y;
	*y = tmp;
}

// Store a range of numbers

void					Span::addRange(int x, int y)
{
	if (x > y)
		swap(&x, &y);

	for (;x <= y; ++x)
	{
		if (this->_vector.size() > this->_n)
			throw std::length_error("\n/!\\ Limit reached!\n");

		this->_vector.push_back(x);
	}
}

// Find the shortest span

unsigned int			Span::shortestSpan()
{
	if (this->_vector.size() < 2)
		throw std::logic_error("\n/!\\ No span to find!\n");

	int					find;
	int					span = INT_MAX;
	std::vector<int>	tmp = this->_vector;

	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator	iterator = tmp.begin();
	
	for (std::vector<int>::iterator	i = tmp.begin() + 1; i != tmp.end(); ++i)
	{
		find = std::abs(*i - *iterator);

		if (find < span)
			span = find;

		iterator = i;
	}

	return (span);
}

// Find the longest span

unsigned int			Span::longestSpan()
{
	if (this->_vector.size() < 2)
		throw std::logic_error("\n/!\\ No span to find!\n");

	return (*std::max_element(this->_vector.begin(),
			this->_vector.end()) -
			*std::min_element(this->_vector.begin(),
					this->_vector.end()));
}