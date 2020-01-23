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

#include "../includes/span.hpp"
#include <iostream>
#include <stdexcept>

int			main()
{
	std::cout << "\n----------------- SPAN 5 ------------------\n" << std::endl;

	Span	span(5);

	try
	{
		span.addNumber(1);
		span.addNumber(3);
		span.addNumber(5);
		span.addNumber(7);
		span.addNumber(10);
		span.addNumber(6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Shortest span = "<< span.shortestSpan() << std::endl;
		std::cout << "Longest span = " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----------------- SPAN 12000 --------------\n" << std::endl;

	Span span2(12000);

	try
	{
		span2.addRange(158, 11842);
		std::cout << "Shortest span = "<< span2.shortestSpan() << std::endl;
		std::cout << "Longest span = " << span2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----------------- SPAN 1 ------------------\n" << std::endl;

	Span span3(1);

	try
	{
		span3.addNumber(1);
		std::cout << span3.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}