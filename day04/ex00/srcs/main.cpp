/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:21:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:21:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Sorcerer.hpp"
#include "../includes/Victim.hpp"
#include "../includes/Peon.hpp"
#include "../includes/Soldier.hpp"
#include "../includes/Noble.hpp"

int	main()
{
	std::cout << "\n---------------- MAIN PART ----------------\n" << std::endl;

	Sorcerer 	robert("Robert", "the Magnificent");

	Victim 		jim("Jimmy");
	Peon 		joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\n-------------- DERIVED PART --------------\n" << std::endl;

	Soldier		moos("Moos");
	Noble		wilhelm("wilhelm");

	std::cout << moos << wilhelm;

	robert.polymorph(moos);
	robert.polymorph(wilhelm);

	return (0);
}

