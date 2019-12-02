/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:34:49 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:34:49 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ZombieHorde.hpp"

int		main()
{
	ZombieHorde zombieHorde = ZombieHorde(15);

	zombieHorde.announce();

	return (0);
}