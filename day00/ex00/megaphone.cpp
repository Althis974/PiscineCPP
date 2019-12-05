/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/19 16:10:00 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 16:10:00 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string s;
		for (int i = 1; i < ac; ++i)
		{
			s = av[i];
			for (size_t j = 0; j < s.length(); ++j)
				s.at(j) = std::toupper(s[j]);
			std::cout << s;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}