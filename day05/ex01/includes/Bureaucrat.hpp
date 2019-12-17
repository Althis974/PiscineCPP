/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 10:58:27 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 10:58:27 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>

class Form;

class Bureaucrat
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
	Bureaucrat(const std::string &name, int grade);

	// Copy constructor
	Bureaucrat(const Bureaucrat &src);

	// Destructor
	~Bureaucrat();

	// Assignation operator overload
	Bureaucrat &					operator=(const Bureaucrat &rhs);

	// Getters
	std::string						getName() const;
	int								getGrade() const;

	// Setter
	void							setGrade(int grade);

	// Increment
	void							incrementGrade();

	// Decrement
	void							decrementGrade();

	// Sign form
	void							signForm(Form &form);

private:

	const std::string				_name;
	int								_grade;
};

// Insertion operator overload
std::ostream &						operator<<(std::ostream &out,
												 const Bureaucrat &rhs);


#endif //BUREAUCRAT_HPP
