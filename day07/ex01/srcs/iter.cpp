/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   iter.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 00:01:33 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 00:01:33 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void				iter(T *array, size_t len, void (*f)(const T &))
{
	for (size_t i = 0; i < len; ++i)
		f(array[i]);
}

template <typename T>
void				print(T const & x)
{
	std::cout << x << std::endl;
}

int	main()
{
	int				tab[] = {2, 4, 7, 1, 9};
	char			list[] = {'c', 'z', 'n', 'q', 'g'};
	std::string		array[] = {"hello", "hallo", "salut", "ciao", "hola"};

	std::cout << "\n------------ INT ARRAY -----------------\n" << std::endl;
	iter<int>(tab, 5, print);
	std::cout << "\n------------ CHAR ARRAY ----------------\n" << std::endl;
	iter<char>(list, 5, print);
	std::cout << "\n------------ STRING ARRAY --------------\n" << std::endl;
	iter<std::string>(array, 5, print);

	return (0);
}