/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 13:28:28 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 13:28:28 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Human.hpp"

// Melee attack

void	Human::meleeAttack(const std::string &target)
{
	std::cout << "STOP DYING AT ME!!\n*" << target << " fainted!*" << std::endl;
}

// Ranged attack

void	Human::rangedAttack(const std::string &target)
{
	std::cout << "Your FAMILY is next!!\n*" << target << " is rushing on you*\n"
			  << std::endl;
}

// Intimidating shout

void	Human::intimidatingShout(const std::string &target)
{
	std::cout << "I'LL SLICE OFF YOUR EYELIDS SO YOU CAN WATCH THE END!!\n*"
			  << target << " is shivering*\n" << std::endl;
}

// Pointer to member

typedef void(Human::*actionPtr) (std::string const &);

// Action

void	Human::action(const std::string &action_name, const std::string &target)
{
	std::string	actionNames[3] = {
			"Melee Attack",
			"Ranged Attack",
			"Intimidating Shout"
	};

	actionPtr	actions[3] = {
			&Human::meleeAttack,
			&Human::rangedAttack,
			&Human::intimidatingShout
	};

	for (int i = 0; i < 3; ++i)
	{
		if (actionNames[i] == action_name)
			(this->*actions[i])(target);
	}
}