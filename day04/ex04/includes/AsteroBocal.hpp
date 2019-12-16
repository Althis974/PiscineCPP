/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AsteroBocal.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:57 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:57 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_HPP
#define ASTEROBOCAL_HPP

#include "IAsteroid.hpp"

class	AsteroBocal : public IAsteroid
{

public:

	// Constructor
	AsteroBocal();

	// Copy constructor
	AsteroBocal(const AsteroBocal &src);

	// Destructor
	virtual ~AsteroBocal();

	// Assignation operator overload
	AsteroBocal &		operator=(const AsteroBocal &rhs);

	// Getter
	std::string			getName() const;

	// Be mined
	std::string			beMined(StripMiner*) const;
	std::string			beMined(DeepCoreMiner*) const;

private:

	std::string			_name;
};


#endif //ASTEROBOCAL_HPP
