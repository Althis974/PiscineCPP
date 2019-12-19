/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CentralBureaucracy.cpp                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 16:58:27 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:58:27 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/CentralBureaucracy.hpp"

// Constructor

CentralBureaucracy::CentralBureaucracy() : _officeIndex(0)
{
	for (int i = 0; i < 20; ++i)
		this->_blocks[i] = OfficeBlock();

	for (int i = 0; i < 42; ++i)
		this->_queue[i] = "";
}

// Copy constructor

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &src) :
						_officeIndex(src._officeIndex)
{
	for (int i = 0; i < 20; ++i)
		this->_blocks[i] = src._blocks[i];

	for (int i = 0; i < 42; ++i)
		this->_queue[i] = src._queue[i];
}

// Destructor

CentralBureaucracy::~CentralBureaucracy()
{

}

// Assignation operator overload

CentralBureaucracy &	CentralBureaucracy::operator=(const CentralBureaucracy
																		&rhs)
{
	this->_officeIndex = rhs._officeIndex;

	for (int i = 0; i < 20; ++i)
		this->_blocks[i] = rhs._blocks[i];

	for (int i = 0; i < 42; ++i)
		this->_queue[i] = rhs._queue[i];

	return (*this);
}

// Feed office blocks

void CentralBureaucracy::feed(Bureaucrat *bureaucrat)
{
	for (int i = 0; i < 20; ++i)
	{
		OfficeBlock &officeBlock = this->_blocks[i];

		if (!officeBlock.getIntern())
			officeBlock.setIntern(new Intern());

		if (!officeBlock.getSigner())
		{
			officeBlock.setSigner(bureaucrat);
			return;
		}

		if (!officeBlock.getExecutor())
		{
			officeBlock.setExecutor(bureaucrat);
			return;
		}
	}

	std::cout << "We will call you back..." << std::endl;
}

// Queue targets

void CentralBureaucracy::queueUp(const std::string &target)
{
	for (int i = 0; i < 42; ++i)
	{
		if (this->_queue[i].empty())
		{
			this->_queue[i] = target;
			return;
		}
	}

	std::cout << "Try again later!" << std::endl;
}

// Make all these sla.. employees work

void CentralBureaucracy::doBureaucracy()
{
	std::string types[3] = {
			"ShrubberyCreation",
			"RobotomyRequest",
			"PresidentialPardon"
	};

	for (int i = 0; i < 42; ++i)
	{
		if (this->_queue[i].empty())
			return;

		try
		{
			std::cout << "\n----- OFFICE BLOCK NUMBER " << this->_officeIndex
					  << " -----\n" << std::endl;
			this->_blocks[this->_officeIndex].doBureaucracy(
					types[std::rand() % 3], this->_queue[i]);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		this->_queue[i] = "";

		this->_officeIndex++;

		if (this->_officeIndex >= 20
			|| !this->_blocks[this->_officeIndex].getIntern()
			|| !this->_blocks[this->_officeIndex].getSigner()
			|| !this->_blocks[this->_officeIndex].getExecutor())
			this->_officeIndex = 0;
	}
}
