/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:27:13 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:27:13 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/NinjaTrap.hpp"

int main()
{
	NinjaTrap ninjaTrap("N1NJ4-TP");
	ClapTrap clapTrap("Clappy", 100, 100, 0,
			0, 1, 0, 0, 0);
	FragTrap fragtrap("FR4G-TP");
	ScavTrap scavTrap("SC4V-TP");

	ninjaTrap.ninjaShoebox(clapTrap);
	ninjaTrap.ninjaShoebox(fragtrap);
	ninjaTrap.ninjaShoebox(scavTrap);

	NinjaTrap fakeTrap(ninjaTrap);
	fakeTrap.setName("F4K3-TP");

	ninjaTrap.ninjaShoebox(fakeTrap);

	clapTrap.takeDamage(120);
	fragtrap.takeDamage(120);
	scavTrap.takeDamage(120);
	fakeTrap.takeDamage(120);

	ninjaTrap.ninjaShoebox(ninjaTrap);
}