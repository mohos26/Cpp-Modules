#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		// Contact info
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	darkestSecret;
	public:
		// getters
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getNumber(void);
		std::string	getDarkestSecret(void);
		// setters
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickname(std::string nickname);
		void	setNumber(std::string number);
		void	setDarkestSecret(std::string darkestSecret);
};

#endif
