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

#include "../includes/Contact.h"

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

std::string		Contact::getFirstName() const
{
	return this->_firstName;
}

std::string		Contact::getLastName() const
{
	return this->_lastName;
}

std::string		Contact::getNickname() const
{
	return this->_nickname;
}

std::string		Contact::getLogin() const
{
	return this->_login;
}

std::string		Contact::getPostalAddress() const
{
	return this->_postalAddress;
}

std::string		Contact::getEmailAddress() const
{
	return this->_emailAddress;
}

std::string		Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string		Contact::getBirthdayDate() const
{
	return this->_birthdayDate;
}

std::string		Contact::getFavoriteMeal() const
{
	return this->_favoriteMeal;
}

std::string		Contact::getUnderwearColor() const
{
	return this->_underwearColor;
}

std::string		Contact::getDarkestSecret() const
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