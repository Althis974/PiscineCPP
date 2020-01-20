/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.hpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:41 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:41 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{

public:

	// Constructor
	RobotomyRequestForm(const std::string &target);

	// Copy constructor
	RobotomyRequestForm(const RobotomyRequestForm &src);

	// Destructor
	virtual ~RobotomyRequestForm();

	// Assignation operator overload
	RobotomyRequestForm &			operator=(const RobotomyRequestForm &rhs);

	// Execute form
	void							executing(const Bureaucrat &) const;
};


#endif //ROBOTOMYREQUESTFORM_HPP
