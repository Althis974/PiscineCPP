/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PhoneBook.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/25 15:19:17 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/25 15:19:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PhoneBook.h"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook()
{
	this->count = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::addContact()
{
	std::string		infos[11];

	if (count >= 7)
	{
		std::cout << "No more row for new contact. Sorry!" << std::endl
		<< "Btw noone has that much friends." << std::endl
		<< "You should seriously question yourself." << std::endl;
		return;
	}

	std::cout << "\n----------- CREATE NEW CONTACT -----------\n" << std::endl;

	std::cout << "Enter first name: ";
	std::cin >> infos[0];
	firewall(&infos[0], 20);
	std::cout << infos[0] << std::endl;

	std::cout << "Enter last name: ";
	std::cin >> infos[1];
	firewall(&infos[1], 20);
	std::cout << infos[1] << std::endl;

	std::cout << "Enter nickname: ";
	std::cin >> infos[2];
	firewall(&infos[2], 20);
	std::cout << infos[2] << std::endl;

	std::cout << "Enter login: ";
	std::cin >> infos[3];
	firewall(&infos[3], 10);
	std::cout << infos[3] << std::endl;

	std::cout << "Enter postal address: ";
	std::getline(std::cin, infos[4]);
	std::cout << infos[4] << std::endl;

	std::cout << "Enter email address: ";
	std::cin >> infos[5];
	firewall(&infos[5], 30);
	std::cout << infos[5] << std::endl;

	std::cout << "Enter phone number: ";
	std::cin >> infos[6];
	firewall(&infos[6], 20);
	std::cout << infos[6] << std::endl;

	std::cout << "Enter birthday date: ";
	std::cin >> infos[7];
	firewall(&infos[7], 20);
	std::cout << infos[7] << std::endl;

	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, infos[8]);
	std::cout << infos[8] << std::endl;

	std::cout << "Enter underwear color: ";
	std::cin >> infos[9];
	firewall(&infos[9], 20);
	std::cout << infos[9] << std::endl;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, infos[10]);
	std::cout << infos[10] << std::endl;

	Contact contact(infos[0], infos[1], infos[2], infos[3], infos[4],
			infos[5], infos[6], infos[7], infos[8], infos[9],
			infos[10]);

	contacts[count++] = contact;
}

void	PhoneBook::firewall(std::string *input, int maxChar)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (input->length() > maxChar)
	{
		std::cout << "Are you an alien? D:\nThen try again: ";
		std::cin >> *input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::searchContact()
{

}