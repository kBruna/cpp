#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact) {
	this->_contact[this->index] = contact;
	this->index = (this->index + 1) % 8;
}
