/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 13:26:43 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 13:26:43 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Human.hpp"

int 		main()
{
	Human krieg;
	std::string target = "Skagzilla";

	std::cout << "\n\n----- Welcome to the Circle of Ssslaughter! " <<
	"This WILL get ugly! -----\n\n" << std::endl;

	krieg.action("Intimidating Shout", target);
	krieg.action("Ranged Attack", target);
	krieg.action("Melee Attack", target);

	std::cout << "\n\n ----- DAMMIT! You weren't ssssupposed to live! -----\n\n"
	<< std::endl;
}

