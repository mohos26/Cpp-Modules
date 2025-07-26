#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	darkest_secret;
	public:
		// getters
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getNumber(void);
		std::string	getDarkestSecret(void);
		// setters
		void	setFirstName(std::string first_name);
		void	setLastName(std::string last_name);
		void	setNickname(std::string nickname);
		void	setNumber(std::string number);
		void	setDarkestSecret(std::string darkest_secret);
};

#endif
