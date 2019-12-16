/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   BocalSteroid.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:41:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:41:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BOCALSTEROID_HPP
#define BOCALSTEROID_HPP

#include "IAsteroid.hpp"

class	BocalSteroid : public IAsteroid
{

public:

	// Constructor
	BocalSteroid();

	// Copy constructor
	BocalSteroid(const BocalSteroid &src);

	// Destructor
	virtual ~BocalSteroid();

	// Assignation operator overload
	BocalSteroid &		operator=(const BocalSteroid &rhs);

	// Getter
	std::string			getName() const;

	// Be mined
	std::string			beMined(StripMiner*) const;
	std::string			beMined(DeepCoreMiner*) const;

private:

	std::string			_name;
};


#endif //BOCALSTEROID_HPP
