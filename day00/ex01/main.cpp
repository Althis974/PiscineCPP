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
#include "PhoneBook.h"

int main()
{
	PhoneBook phonebook;

	phonebook.setFirstName("bonobo");
	std::cout << phonebook.getFirstName() << std::endl;

	return 0;
}

