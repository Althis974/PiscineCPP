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
#include "../includes/Intern.hpp"
#include "../includes/OfficeBlock.hpp"

int	main()
{
	std::cout << "\n----- Presentation -----\n" << std::endl;

	Intern			idiotOne;
	Bureaucrat		hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat		bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock 	ob;

	std::cout << hermes << std::endl;
	std::cout << bob << std::endl;

	std::cout << "\n----- Try to work without employees -----\n" << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setIntern(&idiotOne);

	std::cout << "\n----- Try to work with intern only -----\n" << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setSigner(&bob);

	std::cout << "\n----- Try to work with intern and signer -----\n"
			  << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setExecutor(&bob);

	std::cout << "\n----- Try to work with full team -----\n" << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setSigner(&hermes);

	std::cout << "\n----- Try to switch bob with hermes as signer -----\n"
			  << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setExecutor(&hermes);

	std::cout << "\n----- Finally bob is useless -----\n" << std::endl;
	try
	{
		ob.doBureaucracy("RobotomyRequest", "Clappy");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat		armando = Bureaucrat("Armando", 50);
	Bureaucrat		lucca = Bureaucrat("lucca", 115);

	std::cout << "\n----- Ritals try to make us compete -----\n" << std::endl;
	try
	{
		OfficeBlock 	ritals(nullptr, &lucca, &armando);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Intern			pedro;
	OfficeBlock 	ritals(&pedro, &lucca, &armando);

	std::cout << "\n----- They are persistent -----\n" << std::endl;
	try
	{
		ritals.doBureaucracy("", "peaky");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Wow they finally did something that works -----\n"
			  << std::endl;
	try
	{
		ritals.doBureaucracy("ShrubberyCreation", "Hall");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}