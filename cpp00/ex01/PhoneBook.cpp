#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
	this->_contact[this->index] = contact;
	this->index = (this->index + 1) % 8;
}

int	PhoneBook::getIndex()
{
	return this->index;
}

std::string	PhoneBook::formatString(std::string to_format)
{
	if (to_format.size() > 10)
	{
		to_format.resize(9);
		to_format += ".";
	}
	return (to_format);
}

void	PhoneBook::printContact(int index)
{
	std::string	firstName = formatString(this->_contact[index].getFirstName());
	std::string lastName = formatString(this->_contact[index].getLastName());
	std::string nickName = formatString(this->_contact[index].getNickname());

	std::cout << std::setw(10) << index << "|"
		<< std::setw(10) << firstName << "|"
		<< std::setw(10) << lastName << "|"
		<< std::setw(10) << nickName << "|" << std::endl;
}
