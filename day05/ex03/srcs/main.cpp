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
#include "../includes/Intern.hpp"

int	main()
{
	Intern	jack;

	Form	*shrubbery;
	Form	*robotomy;
	Form	*pardon;
	Form	*fake;

	std::cout << "\n----- Try to create Form ShrubberyCreation with jack "
			  << "-----\n" << std::endl;
	try
	{
		shrubbery = jack.makeForm("ShrubberyCreation", "HomeGarden");
		std::cout << *shrubbery << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to create Form RobotomyRequest with jack "
			  << "-----\n" << std::endl;
	try
	{
		robotomy = jack.makeForm("RobotomyRequest", "Clappy");
		std::cout << *robotomy << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to create Form PresidentialPardon with jack "
			  << "-----\n" << std::endl;
	try
	{
		pardon = jack.makeForm("PresidentialPardon", "Francky");
		std::cout << *pardon << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- Try to create fake form with jack -----\n"
			  << std::endl;
	try
	{
		fake = jack.makeForm("fake", "form");
		std::cout << *fake << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}