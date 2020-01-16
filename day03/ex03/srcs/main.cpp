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

int 			main()
{
	NinjaTrap	ninjaTrap("N1NJ4-TP");
	ClapTrap	clapTrap("Clappy", 100, 100, 0,
			0, 1, 0, 0, 0);
	FragTrap	fragTrap("FR4G-TP");
	ScavTrap	scavTrap("SC4V-TP");

	ninjaTrap.ninjaShoebox(clapTrap);
	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);

	clapTrap.takeDamage(120);
	fragTrap.takeDamage(120);
	scavTrap.takeDamage(120);

	NinjaTrap	fakeTrap(ninjaTrap);
	fakeTrap.setName("F4K3-TP");

	ninjaTrap.meleeAttack("F4K3-TP");
	fakeTrap.takeDamage(60);

	fakeTrap.beRepaired(100);

	ninjaTrap.rangedAttack("F4K3-TP");
	fakeTrap.takeDamage(5);

	ninjaTrap.ninjaShoebox(fakeTrap);

	fakeTrap.takeDamage(120);

	ninjaTrap.ninjaShoebox(ninjaTrap);

	return (0);
}