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
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>
#include <stdexcept>

int	main()
{

	std::cout << "\n----- Presentation -----\n" << std::endl;

	Bureaucrat scott = Bureaucrat("Scott", 1);
	Bureaucrat maggie = Bureaucrat("Maggie", 25);
	Bureaucrat bruce = Bureaucrat("Bruce", 140);

	std::cout << scott << std::endl;
	std::cout << maggie << std::endl;
	std::cout << bruce << std::endl;

	std::cout << "\n----- Today's work -----\n" << std::endl;

	ShrubberyCreationForm shrubberyCreation =
			ShrubberyCreationForm("HomeGarden");
	RobotomyRequestForm robotomyRequest = RobotomyRequestForm("Clappy");
	PresidentialPardonForm presidentialPardon =
			PresidentialPardonForm("Francky");

	std::cout << shrubberyCreation << std::endl;
	std::cout << robotomyRequest << std::endl;
	std::cout << presidentialPardon << std::endl;

	std::cout << "\n----- Try to execute Form ShrubberyCreation with Bruce "
			  << "-----\n" << std::endl;
	try
	{
		bruce.executeForm(shrubberyCreation);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to sign Form ShrubberyCreation with Bruce "
			  << "-----\n" << std::endl;
	try
	{
		bruce.signForm(shrubberyCreation);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form ShrubberyCreation with Bruce "
			  << "-----\n" << std::endl;
	try
	{
		bruce.executeForm(shrubberyCreation);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form ShrubberyCreation with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.executeForm(shrubberyCreation);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form RobotomyRequest with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.executeForm(robotomyRequest);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to sign Form RobotomyRequest with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.signForm(robotomyRequest);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form RobotomyRequest with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.executeForm(robotomyRequest);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to sign Form PresidentialPardon with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.signForm(presidentialPardon);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form PresidentialPardon with Maggie "
			  << "-----\n" << std::endl;
	try
	{
		maggie.executeForm(presidentialPardon);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----- Try to execute Form PresidentialPardon with Scott "
			  << "-----\n" << std::endl;
	try
	{
		scott.executeForm(presidentialPardon);
		std::cout << shrubberyCreation << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}