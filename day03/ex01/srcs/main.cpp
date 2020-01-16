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

int				main()
{
	ScavTrap	scavTrap("SC4V-TP");
	FragTrap	fragTrap("FR4G-TP");

	scavTrap.challengeNewcomer("FR4G-TP");

	fragTrap.rangedAttack("SC4V-TP");
	scavTrap.takeDamage(20);

	scavTrap.rangedAttack("FR4G-TP");
	fragTrap.takeDamage(15);

	scavTrap.challengeNewcomer("FR4G-TP");

	fragTrap.meleeAttack("SC4V-TP");
	scavTrap.takeDamage(30);

	scavTrap.meleeAttack("FR4G-TP");
	fragTrap.takeDamage(20);

	for (int i = 0; i < 3; ++i)
		scavTrap.beRepaired(25);

	ScavTrap claptrap(scavTrap);
	claptrap.setName("Clappy");

	scavTrap.challengeNewcomer("FR4G-TP");
	claptrap.challengeNewcomer("FR4G-TP");

	for (int i = 0; i < 5; ++i)
		fragTrap.vaulthunter_dot_exe("SC4V-TP and Clappy");

	for (int i = 0; i < 4; ++i)
	{
		scavTrap.takeDamage(50);
		claptrap.takeDamage(50);
	}

	return (0);
}