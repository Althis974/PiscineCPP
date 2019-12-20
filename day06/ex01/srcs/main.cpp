/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/19 14:40:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/19 14:40:38 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct 				Data {
	std::string		s1;
	int				n;
	std::string		s2;
};

// Serialize data

void *				serialize()
{
	std::srand(time(nullptr));

	char *bytes = new char[20];
	char alnum[41] = "+*01234ABCDEFGHIJKLMnopqrstuvwxyz56789-/";

	for(int i = 0; i < 8; ++i)
		bytes[i] = alnum[std::rand() % 40];

	bytes[8] = std::rand();

	for(int i = 12; i < 20; ++i)
		bytes[i] = alnum[std::rand() % 40];

	std::cout << "\n----- Serialized data -----\n" << std::endl;
	std::cout << "Str (8 bytes): ";
	for (int i = 0; i < 8; ++i)
		std::cout << bytes[i] ;
	std::cout << std::endl;
	std::cout << "int (4 bytes): ";
	std::cout << static_cast<int>(bytes[8]);
	std::cout << std::endl;
	std::cout << "Str (8 bytes): ";
	for (int i = 12; i < 20; ++i)
		std::cout << bytes[i];
	std::cout << std::endl;

	return (reinterpret_cast<void*>(bytes));
}

// Deserialize data

Data *				deserialize(void *raw)
{
	char *			bytes = reinterpret_cast<char*>(raw);
	Data *			data = new Data;

	for (int i = 0; i < 8; ++i)
		data->s1 = data->s1 + bytes[i];
	data->n = bytes[8];
	for (int i = 12; i < 20; ++i)
		data->s2 = data->s2 + bytes[i];

	return (data);
}

int					main()
{
	void *raw = serialize();

	if (!raw)
	{
		std::cout << "Allocation failed." << std::endl;
		return (1);
	}

	Data *data = deserialize(raw);

	std::cout << "\n----- Deserialized data -----\n" << std::endl;
	std::cout << "data->s1     : " << data->s1 << std::endl;
	std::cout << "data->n      : " << std::dec << data->n << std::endl;
	std::cout << "data->s2     : " << data->s2 << std::endl;

	delete data;

	return (0);
}