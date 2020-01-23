/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 11:03:58 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 11:03:58 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Parser.hpp"

// Constructor

Parser::Parser()
{

}

// Copy constructor

Parser::Parser(const Parser &src) : _command(src._command),
									_container(src._container)
{

}

// Destructor

Parser::~Parser()
{

}

// Assignation operator overload

Parser &				Parser::operator=(const Parser &rhs)
{
	this->_command = rhs._command;
	this->_container = rhs._container;

	return (*this);
}

void					Parser::parse(std::vector<AInstructions*> &vector,
									  std::stringstream &stringStream)
{
	while (stringStream.get(this->_command))
	{
		AInstructions *instruction = nullptr;
		std::vector<AInstructions*> loopVector;

		switch(this->_command)
		{
			case '+':
				instruction = new Increment(&this->_container);
				break;

			case '-':
				instruction = new Decrement(&this->_container);
				break;

			case '>':
				instruction = new MoveRight(&this->_container);
				break;

			case '<':
				instruction = new MoveLeft(&this->_container);
				break;

			case '[':
				parse(loopVector, stringStream);

				instruction = new Loop(&this->_container, loopVector);
				break;

			case ']':
				return;

			case '.':
				instruction = new Write(&this->_container);
				break;

			case ',':
				instruction = new Read(&this->_container);
				break;

			default:
				break;
		}

		if (!instruction)
			continue;

		vector.push_back(instruction);
	}
}
