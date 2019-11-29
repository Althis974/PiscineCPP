/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:09:17 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:09:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include "../includes/ZombieEvent.hpp"

int		main()
{
	Zombie *francky;
	Zombie *billy;
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("undead marines");
	francky = zombieEvent.newZombie("francky");
	billy = zombieEvent.newZombie("billy");

	zombieEvent.setZombieType("pumpdead");
	for (int i = 0; i < 10; i++)
		zombieEvent.randomChump();

	delete francky;
	delete billy;
}