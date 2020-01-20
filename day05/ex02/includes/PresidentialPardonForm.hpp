/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PresidentialPardonForm.hpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:52 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:52 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:

	// Constructors
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);

	// Copy constructor
	PresidentialPardonForm(const PresidentialPardonForm &src);

	// Destructor
	virtual ~PresidentialPardonForm();

	// Assignation operator overload
	PresidentialPardonForm &	operator=(const PresidentialPardonForm &rhs);

	// Execute form
	void 						executing(const Bureaucrat &) const;
};


#endif //PRESIDENTIALPARDONFORM_HPP
