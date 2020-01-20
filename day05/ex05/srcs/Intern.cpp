/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Intern.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 12:46:01 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 12:46:01 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

/*
**	Intern 
*/

// Constructor

Intern::Intern()
{

}

// Copy constructor

Intern::Intern(const Intern &src)
{
	*this = src;
}

// Destructor

Intern::~Intern()
{

}

// Assignation operator overload

Intern &					Intern::operator=(const Intern &rhs)
{
	(void)rhs;

	return (*this);
}

// Make a form

Form *						Intern::makeForm(const std::string &form, const
															std::string &target)
{
	if (form == "ShrubberyCreation")
	{
		std::cout << "Intern creates " << form << "." << std::endl;

		return (new ShrubberyCreationForm(target));
	}
	else if (form == "RobotomyRequest")
	{
		std::cout << "Intern creates " << form << "." << std::endl;

		return (new RobotomyRequestForm(target));
	}
	else if (form == "PresidentialPardon")
	{
		std::cout << "Intern creates " << form << "." << std::endl;

		return (new PresidentialPardonForm(target));
	}
	else
		throw InvalidFormException();
}

/*
**	Custom Exceptions
*/

/*
**	InvalidFormException
*/

typedef Intern::InvalidFormException InvalidFormException;

// Constructor

InvalidFormException::InvalidFormException()
{

}

// Copy constructor

InvalidFormException::InvalidFormException(const InvalidFormException &src)
{
	*this = src;
}

// Destructor

InvalidFormException::~InvalidFormException() throw()
{

}

// Assignation operator overload

InvalidFormException &		InvalidFormException::operator=(const
													InvalidFormException &rhs)
{
	(void)rhs;

	return (*this);
}

// Returns a pointer to the error description

const char *				InvalidFormException::what() const throw()
{
	return ("Intern::InvalidFormException: Invalid form type!");
}