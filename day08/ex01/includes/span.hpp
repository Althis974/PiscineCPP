/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:46:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:46:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{

public:

	// Constructor
	Span(unsigned int n);

	// Copy constructor
	Span(const Span &src);

	// Destructor
	~Span();

	// Assignation operator overload
	Span &				operator=(const Span &rhs);

	// Store a number
	void				addNumber(int n);

	// Store a range of numbers
	void				addRange(int x, int y);

	// Find the shortest span
	unsigned int		shortestSpan();

	// Find the longest span
	unsigned int		longestSpan();

private:

	unsigned int		_n;
	std::vector<int>	_v;
};


#endif //SPAN_HPP
