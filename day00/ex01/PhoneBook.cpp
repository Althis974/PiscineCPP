/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PhoneBook.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/22 14:07:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/22 14:07:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PhoneBook.h"
#include <iostream>
#include <string>

// Constructor

PhoneBook::PhoneBook()
{

}

// Destructor

PhoneBook::~PhoneBook()
{

}

// Getters

std::string const	PhoneBook::getFirstName()
{
	return this->_firstName;
}

std::string const	PhoneBook::getLastName()
{
	return this->_lastName;
}

std::string const	PhoneBook::getNickname()
{
	return this->_nickname;
}

std::string const	PhoneBook::getLogin()
{
	return this->_login;
}

std::string const	PhoneBook::getPostalAddress()
{
	return this->_postalAddress;
}

std::string const	PhoneBook::getEmailAddress()
{
	return this->_emailAddress;
}

std::string const	PhoneBook::getPhoneNumber()
{
	return this->_phoneNumber;
}

std::string const	PhoneBook::getBirthdayDate()
{
	return this->_birthdayDate;
}

std::string const	PhoneBook::getFavoriteMeal()
{
	return this->_favoriteMeal;
}

std::string const	PhoneBook::getUnderwearColor()
{
	return this->_underwearColor;
}

std::string const	PhoneBook::getDarkestSecret()
{
	return this->_darkestSecret;
}

// Setters

void				PhoneBook::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void				PhoneBook::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void				PhoneBook::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void				PhoneBook::setLogin(std::string login)
{
	this->_login = login;
}

void				PhoneBook::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
}

void				PhoneBook::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
}

void				PhoneBook::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void				PhoneBook::setBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
}

void				PhoneBook::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
}

void				PhoneBook::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
}

void				PhoneBook::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}