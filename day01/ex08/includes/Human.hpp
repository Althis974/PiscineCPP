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

	void action(const std::string &action_name, const std::string &target);

private:

	void meleeAttack(const std::string &target);
	void rangedAttack(const std::string &target);
	void intimidatingShout(const std::string &target);
};


#endif //HUMAN_HPP
