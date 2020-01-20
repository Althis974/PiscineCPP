/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OfficeBlock.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 15:09:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 15:09:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/OfficeBlock.hpp"

/*
**	OfficeBlock
*/

// Constructors

OfficeBlock::OfficeBlock() : _intern(nullptr), _signer(nullptr),
				_executor(nullptr)
{

}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer,
				Bureaucrat *executor) : _intern(intern), _signer(signer),
				_executor(executor)
{
	if (!this->_intern)
		throw NoInternException();

	if (!this->_signer)
		throw NoSignerException();

	if (!this->_executor)
		throw NoExecutorException();
}

// Destructor

OfficeBlock::~OfficeBlock()
{

}

// Getters

Intern *					OfficeBlock::getIntern() const
{
	return (this->_intern);
}

Bureaucrat *				OfficeBlock::getSigner() const
{
	return (this->_signer);
}

Bureaucrat *				OfficeBlock::getExecutor() const
{
	return (this->_executor);
}

// Setters

void						OfficeBlock::setIntern(Intern *intern)
{
	if (!intern)
		throw NoInternException();

	this->_intern = intern;
}

void						OfficeBlock::setSigner(Bureaucrat *signer)
{
	if (!signer)
		throw NoSignerException();

	this->_signer = signer;
}

void						OfficeBlock::setExecutor(Bureaucrat *executor)
{
	if (!executor)
		throw NoExecutorException();

	this->_executor = executor;
}

// Attempt to create, sign and execute a form

void 						OfficeBlock::doBureaucracy(const std::string &type,
													const std::string &target)
{
	if (!this->_intern)
		throw NoInternException();

	if (!this->_signer)
		throw NoSignerException();

	if (!this->_executor)
		throw NoExecutorException();

	Form *form = this->_intern->makeForm(type, target);

	this->_signer->signForm(*form);
	this->_executor->executeForm(*form);
}

/*
**	Custom Exceptions
*/

/*
**	NoInternException
*/

typedef OfficeBlock::NoInternException NoInternException;

// Constructor

NoInternException::NoInternException()
{

}

// Copy constructor

NoInternException::NoInternException(const NoInternException &src)
{
	*this = src;
}

// Destructor

NoInternException::~NoInternException() throw()
{

}

// Assignation operator overload

NoInternException &			NoInternException::operator=(const NoInternException
																		&rhs)
{
	(void)rhs;

	return (*this);
}

// Returns a pointer to the error description

const char *				NoInternException::what() const throw()
{
	return ("OfficeBlock::NoInternException: Intern is missing!");
}

/*
**	NoSignerException
*/

typedef OfficeBlock::NoSignerException NoSignerException;

// Constructor

NoSignerException::NoSignerException()
{

}

// Copy constructor

NoSignerException::NoSignerException(const NoSignerException &src)
{
	*this = src;
}

// Destructor

NoSignerException::~NoSignerException() throw()
{

}

// Assignation operator overload

NoSignerException &			NoSignerException::operator=(const NoSignerException
																		&rhs)
{
	(void)rhs;

	return (*this);
}

// Returns a pointer to the error description

const char *				NoSignerException::what() const throw()
{
	return ("OfficeBlock::NoSignerException: Signer is missing!");
}

/*
**	NoExecutorException
*/

typedef OfficeBlock::NoExecutorException NoExecutorException;

// Constructor

NoExecutorException::NoExecutorException()
{

}

// Copy constructor

NoExecutorException::NoExecutorException(const NoExecutorException &src)
{
	*this = src;
}

// Destructor

NoExecutorException::~NoExecutorException() throw()
{

}

NoExecutorException &		NoExecutorException::operator=(const
													NoExecutorException &rhs)
{
	(void)rhs;

	return (*this);
}

const char *				NoExecutorException::what() const throw()
{
	return "OfficeBlock::NoExecutorException: Executor is missing!";
}