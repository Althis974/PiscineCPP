/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PhoneBook.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 14:21:32 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 14:21:32 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

int const	COLUMN_WIDTH = 10;

class 		PhoneBook
{

public:

			// Constructor
			PhoneBook();

			// Destructor
			~PhoneBook();

			// Commands
			void		addContact();
			void		searchContact();

			// Security
			void		firewall(std::string *input, size_t maxChar);

			// List of contacts
			int 		count;
			Contact		contacts[8];

			// Display
			void		display();
			std::string	truncate(std::string field) const;

			// Utils
			int			stringIsAlpha(std::string str) const;
};


#endif //PHONEBOOK_HPP
