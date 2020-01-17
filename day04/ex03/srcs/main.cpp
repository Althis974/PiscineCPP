/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:29:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:29:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"

int		main()
{
	std::cout << "\n---------------- MAIN PART ----------------\n" << std::endl;

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *zaz = new Character("zaz");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);

	ICharacter *bob = new Character("bob");

	zaz->use(0, *bob);
	zaz->use(1, *bob);

	std::cout << "\n-------------- DERIVED PART --------------\n" << std::endl;

	std::cout << "Type : " << tmp->getType() << ", XP : "
			  << tmp->getXP() << std::endl;

	bob->equip(tmp);
	bob->use(0, *zaz);

	std::cout << "Type : " << tmp->getType() << ", XP : "
			  << tmp->getXP() << std::endl;

	delete bob;
	delete zaz;
	delete src;

	return (0);
}