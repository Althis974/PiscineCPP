/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:29:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:29:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/MiningBarge.hpp"
#include "../includes/AsteroBocal.hpp"
#include "../includes/BocalSteroid.hpp"
#include "../includes/DeepCoreMiner.hpp"
#include "../includes/StripMiner.hpp"

int main()
{
	MiningBarge miningBarge;

	DeepCoreMiner deepCoreMiner;
	StripMiner stripMiner;

	miningBarge.equip(&deepCoreMiner);
	miningBarge.equip(&stripMiner);

	AsteroBocal asteroBocal;
	BocalSteroid bocalSteroid;

	miningBarge.mine(&asteroBocal);
	miningBarge.mine(&bocalSteroid);

	return (0);
}