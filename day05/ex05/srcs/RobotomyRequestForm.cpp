/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.cpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:11 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:11 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

// Constructor

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
						Form("RobotomyRequest", 72,
								45, target)
{

}

// Copy constructor

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
						Form(src)
{

}

// Destructor

RobotomyRequestForm::~RobotomyRequestForm()
{

}

// Assignation operator overload

RobotomyRequestForm &			RobotomyRequestForm::operator=(const
													RobotomyRequestForm &rhs)
{
	Form::operator=(rhs);

	return (*this);
}

// Execute form

void							RobotomyRequestForm::executing(const Bureaucrat
																&) const
{
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully."
				  << std::endl;
	else
		std::cout << "ROBOTOMY FAILURE ON " << this->getTarget() << "."
				  << std::endl;
}