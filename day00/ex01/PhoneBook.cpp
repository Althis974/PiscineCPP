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
#include <iomanip>
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

	if (count > 7)
	{
		std::cout << "\nNo more row for new contact. Sorry!" << std::endl;
		std::cout << "Btw no one has that much friend." << std::endl;
		std::cout << "You should seriously question yourself." << std::endl;
		return;
	}

	std::cout << "\n\n--------- CREATE NEW CONTACT ---------\n\n" << std::endl;

	std::cout << "Enter first name: ";
	std::cin >> infos[0];
	firewall(&infos[0], 20);

	std::cout << "Enter last name: ";
	std::cin >> infos[1];
	firewall(&infos[1], 20);

	std::cout << "Enter nickname: ";
	std::cin >> infos[2];
	firewall(&infos[2], 20);

	std::cout << "Enter login: ";
	std::cin >> infos[3];
	firewall(&infos[3], 10);

	std::cout << "Enter postal address: ";
	std::getline(std::cin, infos[4]);

	std::cout << "Enter email address: ";
	std::cin >> infos[5];
	firewall(&infos[5], 30);

	std::cout << "Enter phone number: ";
	std::cin >> infos[6];
	firewall(&infos[6], 20);

	std::cout << "Enter birthday date: ";
	std::cin >> infos[7];
	firewall(&infos[7], 20);

	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, infos[8]);

	std::cout << "Enter underwear color: ";
	std::cin >> infos[9];
	firewall(&infos[9], 20);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, infos[10]);

	Contact contact(infos[0], infos[1], infos[2], infos[3], infos[4],
			infos[5], infos[6], infos[7], infos[8], infos[9],
			infos[10]);

	contacts[count++] = contact;
}

void	PhoneBook::firewall(std::string *input, size_t maxChar)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (input->length() > maxChar)
	{
		std::cout << "Are you an alien? D:\nThen try again: ";
		std::cin >> *input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::display()
{
	std::string     firstName;
	std::string     lastName;
	std::string     nickname;

	std::cout << "\n\n--------- CONTACTS LIST ---------\n\n" << std::endl;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < count; ++i)
	{
		firstName = contacts[i].getFirstName();
		lastName = contacts[i].getLastName();
		nickname = contacts[i].getNickname();

		std::cout << "|" << std::setw(COLUMN_WIDTH) << i;
		firstName = (firstName.length() > COLUMN_WIDTH) ?
				truncate(firstName) : firstName;
		std::cout << "|" << std::setw(COLUMN_WIDTH) << firstName;

		lastName = (lastName.length() > COLUMN_WIDTH) ?
				truncate(lastName): lastName;
		std::cout << "|" << std::setw(COLUMN_WIDTH) << lastName;

		nickname = (nickname.length() > COLUMN_WIDTH) ? \
            truncate(nickname) : nickname;
		std::cout << "|" << std::setw(COLUMN_WIDTH) << nickname;
		std::cout << "|" << std::endl;
	}
	searchContact();
}

void	PhoneBook::searchContact()
{
	int			i;
	std::string	index;

	std::cout << "\n\nEnter the index of the desired friend: ";
	std::cin >> index;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (index.length() != 1 || stringIsAlpha(index))
	{
		std::cout << "Is it that hard to type a number?\nThen try again: ";
		std::cin >> index;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	i = stoi(index);
	if (i >= 0 && i < count)
	{
		std::cout << "\nOh. I won't judge." << std::endl;
		std::cout << "But I expected better from you." << std::endl;
		std::cout << "Here is what you asked for anyway: \n" << std::endl;

		std::cout << contacts[i].getFirstName() << std::endl;
		std::cout << contacts[i].getLastName() << std::endl;
		std::cout << contacts[i].getNickname() << std::endl;
		std::cout << contacts[i].getLogin() << std::endl;
		std::cout << contacts[i].getPostalAddress() << std::endl;
		std::cout << contacts[i].getEmailAddress() << std::endl;
		std::cout << contacts[i].getPhoneNumber() << std::endl;
		std::cout << contacts[i].getBirthdayDate() << std::endl;
		std::cout << contacts[i].getFavoriteMeal() << std::endl;
		std::cout << contacts[i].getUnderwearColor() << std::endl;
		std::cout << contacts[i].getDarkestSecret() << std::endl;
	}
	else if (i >= count && count > 7)
	{
		std::cout << "\nNo one has that much friend." << std::endl;
		std::cout << "You should seriously question yourself." << std::endl;
	}
	else
	{
		std::cout << "\nRemember: You haven't that much friend.\nGo make you ";
		std::cout << "some more! Or not. I don't really mind." << std::endl;
	}
}

std::string	PhoneBook::truncate(std::string field)
{
	field = field.erase((COLUMN_WIDTH - 1),
						field.length() - (COLUMN_WIDTH - 1));
	field.append(".");
	return (field);
}

int const	PhoneBook::stringIsAlpha(std::string str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (isalpha(str[i]))
			return (1);
	}
	return (0);
}