/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OfficeBlock.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 15:09:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 15:09:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

# include "Bureaucrat.hpp"
# include "Intern.hpp"

class OfficeBlock
{

public:

	class NoInternException : public std::exception
	{
		public:

			// Constructor
			NoInternException();

			// Copy constructor
			NoInternException(const NoInternException &src);

			// Destructor
			virtual ~NoInternException() throw();

			// Assignation operator overload
			NoInternException & 	operator=(const NoInternException &rhs);

			// Returns a pointer to the error description
			const char *			what() const throw();
	};

	class NoExecutorException : public std::exception
	{
		public:

			// Constructor
			NoExecutorException();

			// Copy constructor
			NoExecutorException(const NoExecutorException &src);

			// Destructor
			virtual ~NoExecutorException() throw();

			// Assignation operator overload
			NoExecutorException &	operator=(const NoExecutorException &rhs);

			// Returns a pointer to the error description
			const char *			what() const throw();
	};

	class NoSignerException : public std::exception
	{

		public:

			// Constructor
			NoSignerException();

			// Copy constructor
			NoSignerException(const NoSignerException &src);

			// Destructor
			virtual ~NoSignerException() throw();

			// Assignation operator overload
			NoSignerException &		operator=(const NoSignerException &rhs);

			// Returns a pointer to the error description
			const char *			what() const throw();
	};

	// Constructor
	OfficeBlock();

	// Copy constructor
	OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);

	// Destructor
	~OfficeBlock();

	// Getters
	Intern *						getIntern() const;
	Bureaucrat *					getSigner() const;
	Bureaucrat *					getExecutor() const;

	// Setters
	void							setIntern(Intern *intern);
	void							setSigner(Bureaucrat *signer);
	void							setExecutor(Bureaucrat *executor);

	// Attempt to create, sign and execute a form
	void 							doBureaucracy(const std::string& type,
													const std::string& target);

private:

	Intern *						_intern;
	Bureaucrat *					_signer;
	Bureaucrat *					_executor;
};


#endif //OFFICEBLOCK_HPP
