/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 15:07:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 15:07:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

// Constructor

Pony::Pony(std::string const &name) : _name(name)
{
	std::cout << _name << "! Say hello.\n" << std::endl;
}

// Destructor

Pony::~Pony()
{
	std::cout << "\n*" << _name << " whines*" << std::endl;
}

// Setters

void			Pony::setAge(std::string const &age)
{
	this->_age = age;
}

void			Pony::setColor(std::string const &color)
{
	this->_color = color;
}

// Getters

std::string		Pony::getName() const
{
	return this->_name;
}

std::string		Pony::getAge() const
{
	return this->_age;
}

std::string		Pony::getColor() const
{
	return this->_color;
}