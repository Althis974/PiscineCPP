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

int	main()
{
	std::cout << "\n----- Presentation -----\n" << std::endl;

	Bureaucrat scott = Bureaucrat("Scott", 1);
	Bureaucrat bruce = Bureaucrat("Bruce", 150);

	std::cout << scott << std::endl;
	std::cout << bruce << std::endl;

	std::cout << "\n----- Try to create Jim -----\n" << std::endl;
	try
	{
		Bureaucrat jim = Bureaucrat("Jim", 151);
		std::cout << jim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to decrement Scott -----\n" << std::endl;
	try
	{
		scott.decrementGrade();
		std::cout << scott << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to increment Scott -----\n" << std::endl;
	try
	{
		scott.incrementGrade();
		std::cout << scott << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to decrement Bruce -----\n" << std::endl;
	try
	{
		bruce.decrementGrade();
		std::cout << bruce << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}