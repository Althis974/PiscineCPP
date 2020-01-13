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

	Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickname, const std::string &login,
			const std::string &postalAddress, const std::string &emailAddress,
			const std::string &phoneNumber, const std::string &birthdayDate,
			const std::string &favoriteMeal, const std::string &underwearColor,
			const std::string &darkestSecret);

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
	void				setFirstName(const std::string &firstName);
	void				setLastName(const std::string &lastName);
	void				setNickname(const std::string &nickname);
	void				setLogin(const std::string &login);
	void				setPostalAddress(const std::string &postalAddress);
	void				setEmailAddress(const std::string &emailAddress);
	void				setPhoneNumber(const std::string &phoneNumber);
	void				setBirthdayDate(const std::string &birthdayDate);
	void				setFavoriteMeal(const std::string &favoriteMeal);
	void				setUnderwearColor(const std::string &underwearColor);
	void				setDarkestSecret(const std::string &darkestSecret);

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
