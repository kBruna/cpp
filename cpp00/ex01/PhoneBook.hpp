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
		int			getIndex();
		void		addContact(Contact contact);
		void		printContact(int index);
		std::string	formatString(std::string);
};

#endif
