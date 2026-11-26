#include "PhoneBook.hpp"

void	ft_cmd_list()
{
	std::cout << "> Command [ ADD ] : save a new contact" << std::endl;
	std::cout << "> Command [ SEARCH ] : display a specific contact" << std::endl;
	std::cout << "> Command [ EXIT ] : Quits the program and don't save" << std::endl;
	std::cout << "Command: " << std::endl;
}

void	print_contact(Contact contact)
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: "<< contact.getLastName() << std::endl;
	std::cout << "Phone Number: " << contact.getNickname() << std::endl;
	std::cout << "Nickname: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

std::string	getInput(std::string message)
{
	std::string	user_input;

	do {
		std::cout << message << std::endl;
		std::getline(std::cin, user_input);
		if (user_input.empty())
			std::cout << "Invalid Input" << std::endl;
	} while (user_input.empty());
	return user_input;
}

Contact	createContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	phoneNumber;
	std::string	nickName;
	std::string	darkSecret;

	std::cout << "Add New Contact: " << std::endl;
	firstName = getInput("First Name: ");
	lastName = getInput("Last Name: ");
	phoneNumber = getInput("Phone Number: ");
	nickName = getInput("Nickname: ");
	darkSecret = getInput("Darkest Secret: ");
	std::cout << "New Contact created!" << std::endl << std::endl;

	Contact contact(firstName, lastName, phoneNumber, nickName, darkSecret);
	return (contact);
}

int	main()
{
	int			len;
	PhoneBook	phonebook;
	std::string	user_input;

	std::cout << "Welcome to the PhoneBook" << std::endl;
	std::cout << "This program accepts three commands:" << std::endl;
	do
	{
		if (user_input.empty() || (user_input != "ADD" && user_input != "SEARCH"))
			std::cout << "Invalid command." << std::endl;
		ft_cmd_list();
		std::getline(std::cin, user_input);
		len = user_input.length();
		for (int i = 0; i < len; i++)
			user_input[i] = toupper(user_input[i]);
		if (user_input == "ADD")
		{
			Contact contact = createContact();
			phonebook.addContact(contact);
			std::cout << " -> Registered contact: " << std::endl;
			print_contact(contact);
		}
		else if (user_input == "SEARCH")
		{
			std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|" << std::endl;
			for (int i = 0; i < 4; i++)
				phonebook.printContact(i);
			std::cout << "Select Contact Index:" << std::endl;
			//std::getline(std::cin, index);
		}
	} while (user_input != "EXIT");
	phonebook.~PhoneBook();
	return (0);
}
