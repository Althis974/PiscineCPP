/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 10:58:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 10:58:24 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/*
**	BUREAUCRAT
*/

// Constructor

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	this->setGrade(grade);
}

// Copy constructor

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name),
												_grade(src._grade)
{

}

// Destructor

Bureaucrat::~Bureaucrat()
{

}

// Assignation operator overload

Bureaucrat &			Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;

	return (*this);
}

// Getters

std::string				Bureaucrat::getName() const
{
	return (this->_name);
}

int						Bureaucrat::getGrade() const
{
	return (this->_grade);
}

// Setter

void					Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException(grade);
	if (grade > 150)
		throw GradeTooLowException(grade);

	this->_grade = grade;
}

// Increment

void					Bureaucrat::incrementGrade()
{
	this->setGrade(this->_grade - 1);
}

// Decrement

void					Bureaucrat::decrementGrade()
{
	this->setGrade(this->_grade + 1);
}

// Insertion operator overload

std::ostream &			operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";

	return (out);
}

/*
**	Custom Exceptions
*/

/*
**	GradeTooHighException
*/

typedef Bureaucrat::GradeTooHighException GradeTooHighException;

// Constructor

GradeTooHighException::GradeTooHighException(const int grade) : _grade(grade)
{

}

// Copy constructor

GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) :
						_grade(src._grade)
{

}

// Destructor

GradeTooHighException::~GradeTooHighException() throw()
{

}

// Assignation operator overload

GradeTooHighException &			GradeTooHighException::operator=(const
													GradeTooHighException &rhs)
{
	this->_grade = rhs._grade;

	return (*this);
}

// Getter

int 							GradeTooHighException::getGrade() const
{
	return (this->_grade);
}

// Returns a pointer to the error description
const char *					GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException: Grade is too high!");
}

/*
**	GradeTooLowException
*/

typedef Bureaucrat::GradeTooLowException GradeTooLowException;

// Constructor

GradeTooLowException::GradeTooLowException(const int grade) : _grade(grade)
{

}

// Copy constructor

GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) :
						_grade(src._grade)
{

}

// Destructor

GradeTooLowException::~GradeTooLowException() throw()
{

}

// Assignation operator overload

GradeTooLowException &			GradeTooLowException::operator=(const
													GradeTooLowException &rhs)
{
	this->_grade = rhs._grade;

	return (*this);
}

// Getter

int								GradeTooLowException::getGrade() const
{
	return (this->_grade);
}

// Returns a pointer to the error description

const char *					GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException: Grade is too low!");
}