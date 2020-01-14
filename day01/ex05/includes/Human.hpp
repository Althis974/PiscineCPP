/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:49:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:49:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

# include "Brain.hpp"
#include <string>

class Human
{

public:

	// Constructor
	Human();

	// Destructor
	~Human();

	// Getter
	const Brain &		getBrain() const;

	// Identify
	std::string			identify() const;

private:

	const Brain			_brain;
};


#endif //HUMAN_HPP
