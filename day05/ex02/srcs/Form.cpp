/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 14:35:07 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 14:35:07 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*
**	Form
*/

// Constructor

Form::Form(const std::string &name, int gradeToBeSigned, int gradeToBeExecuted,
			const std::string &target) : _name(name), _signed(false),
			_gradeToBeSigned(gradeToBeSigned),
			_gradeToBeExecuted(gradeToBeExecuted), _target(target)
{
	if (gradeToBeSigned < 1)
		throw GradeTooHighException(gradeToBeSigned);
	if (gradeToBeSigned > 150)
		throw GradeTooLowException(gradeToBeSigned);

	if (gradeToBeExecuted < 1)
		throw GradeTooHighException(gradeToBeExecuted);
	if (gradeToBeExecuted > 150)
		throw GradeTooLowException(gradeToBeExecuted);
}

// Copy constructor

Form::Form(const Form &src) : _name(src._name), _signed(src._signed),
			_gradeToBeSigned(src._gradeToBeSigned),
			_gradeToBeExecuted(src._gradeToBeExecuted), _target(src._target)
{

}

// Destructor

Form::~Form()
{

}

// Assignation operator overload

Form &				Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	this->_target = rhs._target;

	return (*this);
}

// Getters

std::string			Form::getName() const
{
	return (this->_name);
}

int					Form::getGradeToBeSigned() const
{
	return (this->_gradeToBeSigned);
}

int					Form::getGradeToBeExecuted() const
{
	return (this->_gradeToBeExecuted);
}

bool				Form::isSigned() const
{
	return (this->_signed);
}

std::string			Form::getTarget() const
{
	return (this->_target);
}

// Make form to be signed

void				Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToBeSigned)
		throw GradeTooLowException(bureaucrat.getGrade());

	this->_signed = true;
}

// Execute form

void				Form::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->_signed)
		throw UnsignedException();

	if (bureaucrat.getGrade() > this->_gradeToBeExecuted)
		throw GradeTooLowException(bureaucrat.getGrade());

	this->executing(bureaucrat);
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form: " << rhs.getName() << " (to be signed: "
		<< rhs.getGradeToBeSigned() << ", to be executed: "
		<< rhs.getGradeToBeExecuted() << ", status: "
		<< (rhs.isSigned() ? "signed" : "not signed") << ").";

	return (out);
}

/*
**	Custom Exceptions
*/

/*
**	GradeTooHighException
*/

typedef Form::GradeTooHighException GradeTooHighException;

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
	return ("Form::GradeTooHighException: Grade is too high!");
}

/*
**	GradeTooLowException
*/

typedef Form::GradeTooLowException GradeTooLowException;

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
	return ("Form::GradeTooLowException: Grade is too low!");
}

/*
**	UnsignedException
*/

typedef Form::UnsignedException UnsignedException;

// Constructor

UnsignedException::UnsignedException()
{

}

// Copy constructor

UnsignedException::UnsignedException(const UnsignedException &src)
{
	*this = src;
}

// Destructor

UnsignedException::~UnsignedException() throw()
{

}

// Assignation operator overload

UnsignedException &				UnsignedException::operator=(const
														UnsignedException &)
{
	return (*this);
}

// Returns a pointer to the error description

const char *					UnsignedException::what() const throw()
{
	return ("Form::UnsignedException: form is not signed!");
}