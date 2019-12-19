/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/17 10:58:11 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 10:58:11 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/CentralBureaucracy.hpp"

int	main()
{
	std::string bureaucrats[10] = {
			"Scott",
			"Maggie",
			"Bruce",
			"Jim",
			"Peter",
			"Alfred",
			"Liz",
			"Polly",
			"Memphis",
			"Paula"
	};

	std::string targets[10] = {
			"Clappy",
			"Saloon",
			"Francky",
			"Billy",
			"Fred",
			"Wall-e",
			"Eve",
			"Luca",
			"Beach",
			"Curtis"
	};

	CentralBureaucracy central;

	for (int i = 0; i < 20; ++i)
		central.feed(new Bureaucrat(
				bureaucrats[std::rand() % 10], rand() % 150 + 1));

	for (int i = 0; i < 20; ++i)
		central.queueUp(targets[std::rand() % 10]);

	central.doBureaucracy();

	return (0);
}