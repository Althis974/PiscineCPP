/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:09:28 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:09:28 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
public:

	// Constructor
	ZombieEvent();

	// Destructor
	~ZombieEvent();

	// Setting zombie type
	void setZombieType(const std::string& type);

	// Create new zombie on the heap
	Zombie* newZombie(const std::string& name) const;

	// Create nez zombie on the stack
	void randomChump() const;

private:

	std::string _type;
	static std::string _names[8];
};


#endif //ZOMBIEEVENT_HPP
