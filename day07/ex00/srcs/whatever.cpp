/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   whatever.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/05 23:30:59 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/05 23:30:59 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Compares two arguments and returns the smallest one

template <typename T>
const T &			min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

// Compares two arguments and returns the biggest one

template <typename T>
const T &			max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

// Swaps the value of two arguments

template <typename T>
void				swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

int					main()
{
	int   a = 2;
	int   b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	return (0);
}

