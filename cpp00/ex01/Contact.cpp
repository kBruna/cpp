#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void	Contact::setNickname(std::string nickName)
{
	_nickname = nickName;
}

void	Contact::setPhoneNumber(std::string number)
{
	_phoneNumber = number;
}

void	Contact::setDarkestSecret(std::string secret)
{
	_darkestSecret = secret;
}

std::string	Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string	Contact::getNickname() const
{
	return _nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return _darkestSecret;
}

Contact::Contact(std::string firstName, std::string lastName,
	std::string nickname, std::string phoneNumber, std::string darkSecret)
	:	_firstName(firstName),
		_lastName(lastName),
		_nickname(nickname),
		_phoneNumber(phoneNumber),
		_darkestSecret(darkSecret)
{}

Contact::~Contact() {}
