/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 14:21:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 14:21:38 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{

public:

	// Constructors
	Contact();

	Contact(std::string firstName, std::string lastName, std::string nickname,
			std::string login, std::string postalAddress,
			std::string emailAddress, std::string phoneNumber,
			std::string birthdayDate, std::string favoriteMeal,
			std::string underwearColor, std::string darkestSecret);

	// Destructor
	~Contact();

	// Getters
	std::string			getFirstName() const;
	std::string			getLastName() const;
	std::string			getNickname() const;
	std::string			getLogin() const;
	std::string			getPostalAddress() const;
	std::string			getEmailAddress() const;
	std::string			getPhoneNumber() const;
	std::string			getBirthdayDate() const;
	std::string			getFavoriteMeal() const;
	std::string			getUnderwearColor() const;
	std::string			getDarkestSecret() const;

	// Setters
	void				setFirstName(std::string firstName);
	void				setLastName(std::string lastName);
	void				setNickname(std::string nickname);
	void				setLogin(std::string login);
	void				setPostalAddress(std::string postalAddress);
	void				setEmailAddress(std::string emailAddress);
	void				setPhoneNumber(std::string phoneNumber);
	void				setBirthdayDate(std::string birthdayDate);
	void				setFavoriteMeal(std::string favoriteMeal);
	void				setUnderwearColor(std::string underwearColor);
	void				setDarkestSecret(std::string darkestSecret);

private:

	std::string			_firstName;
	std::string			_lastName;
	std::string			_nickname;
	std::string			_login;
	std::string			_postalAddress;
	std::string			_emailAddress;
	std::string			_phoneNumber;
	std::string			_birthdayDate;
	std::string			_favoriteMeal;
	std::string			_underwearColor;
	std::string			_darkestSecret;

};


#endif // CONTACT_HPP
