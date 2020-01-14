/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/05 14:29:28 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/05 14:29:28 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Logger.hpp"

int			main()
{
	Logger	logger("Tron.log");

	logger.log("Console", "whoami");
	logger.log("File", "Hello Sam.");
	logger.log("Console", "Daddy?");
}