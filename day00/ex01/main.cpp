/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/22 14:23:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/22 14:23:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.h"
#include "PhoneBook.h"

int main()
{
	PhoneBook phoneBook;

	std::cout << phoneBook.count << std::endl;

	phoneBook.addContact();

	std::cout << phoneBook.count << std::endl;
	std::cout << "phoneBook firstname: " << phoneBook.contacts[0].getFirstName() << std::endl;

	return 0;
}

