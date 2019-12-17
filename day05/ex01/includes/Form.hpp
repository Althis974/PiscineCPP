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

			// Constructor
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

			// Constructor
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
	
	// Constructor
	Form(const std::string &name, int gradeToBeSigned, int gradeToBeExecuted);

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

	// Make form to be signed
	void							beSigned(Bureaucrat &bureaucrat);

private:

	const std::string				_name;
	bool							_signed;
	const int						_gradeToBeSigned;
	const int						_gradeToBeExecuted;
};

// Insertion operator overload
std::ostream &						operator<<(std::ostream &out,
												 const Form &rhs);


#endif //FORM_HPP
