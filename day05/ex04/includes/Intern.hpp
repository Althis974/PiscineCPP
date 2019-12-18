/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Intern.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 12:46:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 12:46:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:

	class InvalidFormException : public std::exception
	{
		public:

			// Constructor
			InvalidFormException();

			// Copy constructor
			InvalidFormException(const InvalidFormException &src);

			// Destructor
			virtual ~InvalidFormException() throw();

			// Assignation operator overload
			InvalidFormException &	operator=(const InvalidFormException &rhs);

			// Returns a pointer to the error description
			virtual const char *	what() const throw();
	};

	// Constructor
	Intern();

	// Copy constructor
	Intern(const Intern &src);

	// Destructor
	~Intern();

	// Assignation operator overload
	Intern &	operator=(const Intern &rhs);

	// Make a form
	Form *		makeForm(const std::string &form, const std::string &target);
};


#endif //INTERN_HPP
