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
#include "../includes/Contact.h"
#include "../includes/PhoneBook.h"

int 	findCommand(std::string const *command)
{
	if (*command == "SEARCH" || *command == "search" || *command == "Search")
		return (1);
	else if (*command == "ADD" || *command == "add" || *command == "Add")
		return(2);
	else if (*command == "EXIT" || *command == "exit" || *command == "Exit")
		return (3);

	return (0);
}

int		checkCommand(std::string *command)
{
	while (!findCommand(command))
	{
		std::cout << "Invalid command. You misspelled that?\nThen try again: ";
		std::cin >> *command;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (findCommand(command));
}

int		main()
{
	std::string command;
	PhoneBook phoneBook;

	std::cout << "\n------ WELCOME TO A WHOLE NEW WORLD! ------\n" << std::endl;
	std::cout << "\nJust kidding, that's just a new phonebook.\n" << std::endl;
	std::cout << "\nPS: Alien aren't allowed here. ";
	std::cout << "So go back fill your space logbook!\n" << std::endl;

	std::cout << "\n\n\n--- WAITING FOR YOUR COMMAND... ---\n\n\n" << std::endl;
	std::cout << "SEARCH | ADD | EXIT: ";
	std::cin >> command;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (checkCommand(&command) != 3)
	{
		if (checkCommand(&command) == 1)
			phoneBook.display();
		else if (checkCommand(&command) == 2)
			phoneBook.addContact();

		std::cout << "\n----- WAITING FOR YOUR COMMAND... -----\n" << std::endl;
		std::cin >> command;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "\n-- SEE YOU COMMANDER! WATCH OUT FOR ALIEN! --" << std::endl;
	return 0;
}

