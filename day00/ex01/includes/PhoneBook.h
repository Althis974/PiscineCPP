/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PhoneBook.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/25 15:19:31 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/25 15:19:31 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef SYSTEM_H
#define SYSTEM_H

#include "Contact.h"
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


#endif //PHONEBOOK_H
