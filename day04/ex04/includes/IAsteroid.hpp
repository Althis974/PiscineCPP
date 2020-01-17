/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IAsteroid.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:37:50 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:37:50 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <string>

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{

public:

	virtual ~IAsteroid() {}
	virtual	std::string	beMined(DeepCoreMiner *) const = 0;
	virtual	std::string	beMined(StripMiner *) const = 0;
	virtual	std::string	getName() const = 0;
};


#endif //IASTEROID_HPP
