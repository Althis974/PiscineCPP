/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberryCreationForm.cpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 10:17:07 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 10:17:07 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

// Constructor

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
						Form("ShrubberyCreation", 145,
								137, target)
{

}

// Copy constructor

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
						Form(src)
{

}

// Destructor

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

// Assignation operator overload

ShrubberyCreationForm &			ShrubberyCreationForm::operator=(const
													ShrubberyCreationForm &rhs)
{
	Form::operator=(rhs);

	return (*this);
}

// ASCII tree

const std::string tree = "                                              .\n"
						 "                                   .         ;  \n"
						 "      .              .              ;%     ;;   \n"
						 "        ,           ,                :;%  %;   \n"
						 "         :         ;                   :;%;'     .,\n"
						 ",.        %;     %;            ;        %;'    ,;\n"
						 "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
						 "   %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
						 "    ;%;      %;        ;%;        % ;%;  ,%;'\n"
						 "     `%;.     ;%;     %;'         `;%%;.%;'\n"
						 "      `:;%.    ;%%. %@;        %; ;@%;%'\n"
						 "         `:%;.  :;bd%;          %;@%;'\n"
						 "           `@%:.  :;%.         ;@@%;'   \n"
						 "             `@%.  `;@%.      ;@@%;         \n"
						 "               `@%%. `@%%    ;@@%;        \n"
						 "                 ;@%. :@%%  %@@%;       \n"
						 "                   %@bd%%%bd%%:;     \n"
						 "                     #@%%%%%:;;\n"
						 "                     %@@%%%::;\n"
						 "                     %@@@%(o);  . '         \n"
						 "                     %@@@o%;:(.,'         \n"
						 "                 `.. %@@@o%::;         \n"
						 "                    `)@@@o%::;         \n"
						 "                     %@@(o)::;        \n"
						 "                    .%@@@@%::;         \n"
						 "                    ;%@@@@%::;.          \n"
						 "                   ;%@@@@%%:;;;. \n"
						 "               ...;%@@@@@%%:;;;;,..   ";

// Execute form

void							ShrubberyCreationForm::executing(const
													Bureaucrat &) const
{
	std::ofstream ofStream(this->getTarget() + "_shrubbery");
	ofStream << tree << std::endl;
	ofStream.close();
}