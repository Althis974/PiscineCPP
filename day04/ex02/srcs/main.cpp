/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:52:19 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:52:19 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Squad.hpp"
#include "../includes/TacticalMarine.hpp"
#include "../includes/AssaultTerminator.hpp"

int		main()
{
	std::cout << "\n---------------- MAIN PART ----------------\n" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;

	std::cout << "\n-------------- DERIVED PART --------------\n" << std::endl;

	std::cout << "\n*** Marines squad ***\n";

	TacticalMarine		*francky = new TacticalMarine();
	ISpaceMarine		*billy = new TacticalMarine(*francky);
	ISpaceMarine		*curtis = new TacticalMarine();
	ISpaceMarine		*dina = new TacticalMarine();
	ISquad				*aTeam = new Squad();

	std::cout << "\n*** Terminators squad ***\n";

	AssaultTerminator	*arnold = new AssaultTerminator();
	ISpaceMarine		*schwarzy = new AssaultTerminator(*arnold);
	ISquad				*terminators;

	std::cout << "\n*** Everybody is here? ***\n";

	aTeam->push(francky);
	aTeam->push(billy);
	aTeam->push(curtis);

	std::cout << "\n*** Terminators attack! ***\n";

	terminators = aTeam;

	terminators->push(arnold);
	terminators->push(schwarzy);

	for (int i = 0; i < terminators->getCount(); ++i)
	{
		ISpaceMarine* tmp = terminators->getUnit(i);
		tmp->battleCry();
		tmp->rangedAttack();
		tmp->meleeAttack();
	}

	std::cout << "\n*** All those victims... ***\n";

	delete terminators;

	std::cout << "\n*** I knew someone was missing! ***\n";

	delete dina;

	return (0);
}

