/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 13:28:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 13:28:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include <iostream>

class Human
{

public:

	void action(std::string const &action_name, std::string const &target);

private:

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void intimidatingShout(std::string const &target);
};


#endif //HUMAN_HPP
