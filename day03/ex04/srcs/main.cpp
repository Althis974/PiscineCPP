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
#include "../includes/SuperTrap.hpp"

int				main()
{
	SuperTrap	superTrap("SUP3R-TP");
	ClapTrap	clapTrap("Clappy", 100, 100, 0,
			0, 1, 0, 0, 0);
	FragTrap	fragTrap("FR4G-TP");
	ScavTrap	scavTrap("SC4V-TP");
	NinjaTrap	ninjaTrap("N1NJ4-TP");

	superTrap.meleeAttack("N1NJ4-TP");
	ninjaTrap.takeDamage(60);

	superTrap.rangedAttack("FR4G-TP");
	fragTrap.takeDamage(20);

	superTrap.vaulthunter_dot_exe("SC4V-TP");
	scavTrap.takeDamage(120);

	superTrap.ninjaShoebox(clapTrap);
	clapTrap.takeDamage(120);

	SuperTrap	fakeTrap(superTrap);
	fakeTrap.setName("F4K3-TP");

	fakeTrap.meleeAttack("SUP3R-TP");
	fakeTrap.rangedAttack("SUP3R-TP");
	superTrap.takeDamage(80);

	superTrap.beRepaired(100);
	for (int i = 0; i < 3; ++i)
		superTrap.vaulthunter_dot_exe("F4K3-TP");

	fakeTrap.takeDamage(200);

	return (0);
}