/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 13:28:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 13:28:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/RadScorpion.hpp"
#include "../includes/PlasmaRifle.hpp"
#include "../includes/PowerFist.hpp"
#include "../includes/FlameThrower.hpp"
#include "../includes/Undead.hpp"
#include "../includes/Slime.hpp"
#include "../includes/Grenade.hpp"

int main()
{
	std::cout << "\n---------------- MAIN PART ----------------\n" << std::endl;

	Character *zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy *b = new RadScorpion();

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << "\n-------------- DERIVED PART --------------\n" << std::endl;

	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;

	AWeapon *ft = new FlameThrower();

	Enemy *u = new Undead();

	zaz->equip(ft);
	std::cout << *zaz;
	zaz->attack(u);
	std::cout << *zaz;
	zaz->attack(u);

	Enemy *s = new Slime();

	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(s);
	std::cout << *zaz;

	AWeapon *g = new Grenade();

	zaz->equip(g);

	zaz->attack(s);
	std::cout << *zaz;
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->attack(s);
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->attack(s);
	std::cout << *zaz;

	std::cout << "\n-------------- THE END --------------\n" << std::endl;
}
