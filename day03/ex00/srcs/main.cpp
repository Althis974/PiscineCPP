/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 11:15:33 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 11:15:33 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int 			main()
{
	FragTrap	fragTrap("FR4G-TP");

	fragTrap.rangedAttack("Mitrakk");

	for (int i = 0; i < 2; ++i)
		fragTrap.takeDamage(40);

	FragTrap claptrap(fragTrap);
	claptrap.setName("Clappy");

	claptrap.meleeAttack("Skagzilla");

	for (int i = 0; i < 3; ++i)
		fragTrap.beRepaired(50);

	for (int i = 0; i < 5; ++i)
		claptrap.vaulthunter_dot_exe("The Empyrean Sentinel");

	for (int i = 0; i < 2; ++i)
		claptrap.takeDamage(100);

	for (int i = 0; i < 5; ++i)
		fragTrap.vaulthunter_dot_exe("The Empyrean Sentinel");

	return (0);
}