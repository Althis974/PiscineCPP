/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberryCreationForm.hpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

public:

	// Constructor
	ShrubberyCreationForm(const std::string &target);

	// Copy constructor
	ShrubberyCreationForm(const ShrubberyCreationForm &src);

	// Destructor
	virtual ~ShrubberyCreationForm();

	// Assignation operator overload
	ShrubberyCreationForm &		operator=(const ShrubberyCreationForm &rhs);

	// Execute form
	void						executing(const Bureaucrat &) const;
};


#endif //SHRUBBERYCREATIONFORM_HPP
