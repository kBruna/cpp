#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		//Setter
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickname(std::string nickName);
		void	setPhoneNumber(std::string number);
		void	setDarkestSecret(std::string secret);

		//Getter
		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

		Contact(std::string firstName, std::string lastName, std::string nickName,
			std::string phoneNumber, std::string darkSecret);
		~Contact();
};

#endif
