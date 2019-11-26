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

#include <string>
#include "Contact.h"

class PhoneBook
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
	void		firewall(std::string *input, int maxChar);

	// List of contacts
	int 		count;
	Contact		contacts[8];
};


#endif //PHONEBOOK_H
