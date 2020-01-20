/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 14:35:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 14:35:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{

public:

	class GradeTooHighException : public std::exception
	{
		public:

			// Constructors
			GradeTooHighException();
			GradeTooHighException(int grade);

			// Copy constructor
			GradeTooHighException(const GradeTooHighException &src);

			// Destructor
			virtual ~GradeTooHighException() throw();

			// Assignation operator overload
			GradeTooHighException &	operator=(const GradeTooHighException &rhs);

			// Getter
			int						getGrade() const;

			// Returns a pointer to the error description
			const char *			what() const throw();

		private:

			int						_grade;
	};

	class GradeTooLowException : public std::exception
	{

		public:

			// Constructors
			GradeTooLowException();
			GradeTooLowException(int grade);

			// Copy constructor
			GradeTooLowException(const GradeTooLowException &src);

			// Destructor
			virtual ~GradeTooLowException() throw();

			// Assignation operator overload
			GradeTooLowException &	operator=(const GradeTooLowException &rhs);

			// Getter
			int						getGrade() const;

			// Returns a pointer to the error description
			const char *			what() const throw();

		private:

			int						_grade;
	};

	class UnsignedException : public std::exception
	{
		public:

			// Constructor
			UnsignedException();

			// Copy constructor
			UnsignedException(const UnsignedException &src);

			// Destructor
			virtual ~UnsignedException() throw();

			// Assignation operator overload
			UnsignedException &		operator=(const UnsignedException&);

			// Returns a pointer to the error description
			const char *			what() const throw();
	};

	// Constructors
	Form();
	Form(const std::string &name, int gradeToBeSigned, int gradeToBeExecuted,
			const std::string &target);

	// Copy constructor
	Form(const Form &src);

	// Destructor
	~Form();

	// Assignation operator overload
	Form &							operator=(const Form &rhs);

	// Getters
	std::string						getName() const;
	int								getGradeToBeSigned() const;
	int								getGradeToBeExecuted() const;
	bool							isSigned() const;
	std::string						getTarget() const;

	// Make form to be signed
	void							beSigned(Bureaucrat &bureaucrat);

	// Execute form
	void							execute(const Bureaucrat &executor) const;

private:

	const std::string				_name;
	bool							_signed;
	const int						_gradeToBeSigned;
	const int						_gradeToBeExecuted;
	std::string						_target;

	virtual void					executing(const Bureaucrat &executor)
												const = 0;

};

// Insertion operator overload
std::ostream &						operator<<(std::ostream &out,
												 const Form &rhs);


#endif //FORM_HPP
