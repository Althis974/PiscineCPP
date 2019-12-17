/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 10:58:11 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 10:58:11 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	std::cout << "\n----- Presentation -----\n" << std::endl;

	Bureaucrat scott = Bureaucrat("Scott", 1);
	Bureaucrat maggie = Bureaucrat("Maggie", 50);
	Bureaucrat bruce = Bureaucrat("Bruce", 150);

	std::cout << scott << std::endl;
	std::cout << maggie << std::endl;
	std::cout << bruce << std::endl;

	std::cout << "\n----- Today's work -----\n" << std::endl;

	Form a38 = Form("A38", 1, 1);
	Form b65 = Form("B65", 51, 100);

	std::cout << a38 << std::endl;
	std::cout << b65 << std::endl;

	std::cout << "\n----- Try to create Form A39 -----\n" << std::endl;
	try
	{
		Form a39 = Form("A39", 0, 42);
		std::cout << a39 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to create Form B66 -----\n" << std::endl;
	try
	{
		Form b66 = Form("B66", 7, 151);
		std::cout << b66 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign B65 with Bruce -----\n" << std::endl;
	try
	{
		bruce.signForm(b65);
		std::cout << b65 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign B65 with Jim -----\n" << std::endl;
	try
	{
		maggie.signForm(b65);
		std::cout << b65 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign B65 with Scott -----\n" << std::endl;
	try
	{
		scott.signForm(b65);
		std::cout << b65 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign A38 with Jim -----\n" << std::endl;
	try
	{
		a38.beSigned(maggie);
		std::cout << a38 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign A38 with Scott -----\n" << std::endl;
	try
	{
		a38.beSigned(scott);
		std::cout << a38 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}