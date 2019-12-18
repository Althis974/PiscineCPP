/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PresidentialPardonForm.cpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:14 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:14 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

// Constructor

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
							Form("PresidentialPardon", 25,
									5, target)
{

}

// Copy constructor

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm
							&src) : Form(src)
{

}

// Destructor

PresidentialPardonForm::~PresidentialPardonForm()
{

}

// Assignation operator overload

PresidentialPardonForm &		PresidentialPardonForm::operator=(const
													PresidentialPardonForm &rhs)
{
	Form::operator=(rhs);

	return (*this);
}

// Execute form

void							PresidentialPardonForm::executing(const
													Bureaucrat &) const
{
	std::cout << this->getTarget()
			  << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}