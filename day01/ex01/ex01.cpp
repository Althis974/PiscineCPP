/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex01.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:02:31 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:02:31 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void		memoryLeak()
{
	std::string*		panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

