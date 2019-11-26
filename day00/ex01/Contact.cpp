/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/22 14:07:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/22 14:07:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Contact.h"
#include <iostream>
#include <string>

// Constructors

Contact::Contact()
{

}

Contact::Contact(std::string firstName, std::string lastName,
		std::string nickname, std::string login, std::string postalAddress,
		std::string emailAddress, std::string phoneNumber,
		std::string birthdayDate, std::string favoriteMeal,
		std::string underwearColor, std::string darkestSecret) :
		_firstName(firstName), _lastName(lastName), _nickname(nickname),
		_login(login), _postalAddress(postalAddress),
		_emailAddress(emailAddress), _phoneNumber(phoneNumber),
		_birthdayDate(birthdayDate), _favoriteMeal(favoriteMeal),
		_underwearColor(underwearColor), _darkestSecret(darkestSecret)
{

}

// Destructor

Contact::~Contact()
{

}

// Getters

std::string const	Contact::getFirstName()
{
	return this->_firstName;
}

std::string const	Contact::getLastName()
{
	return this->_lastName;
}

std::string const	Contact::getNickname()
{
	return this->_nickname;
}

std::string const	Contact::getLogin()
{
	return this->_login;
}

std::string const	Contact::getPostalAddress()
{
	return this->_postalAddress;
}

std::string const	Contact::getEmailAddress()
{
	return this->_emailAddress;
}

std::string const	Contact::getPhoneNumber()
{
	return this->_phoneNumber;
}

std::string const	Contact::getBirthdayDate()
{
	return this->_birthdayDate;
}

std::string const	Contact::getFavoriteMeal()
{
	return this->_favoriteMeal;
}

std::string const	Contact::getUnderwearColor()
{
	return this->_underwearColor;
}

std::string const	Contact::getDarkestSecret()
{
	return this->_darkestSecret;
}

// Setters

void				Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void				Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void				Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void				Contact::setLogin(std::string login)
{
	this->_login = login;
}

void				Contact::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
}

void				Contact::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
}

void				Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void				Contact::setBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
}

void				Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
}

void				Contact::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
}

void				Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}