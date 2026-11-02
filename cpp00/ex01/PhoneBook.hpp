#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <cctype>
# include <iomanip>

class PhoneBook
{
	private:
		Contact _contact[8];
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact contact);
};

#endif
