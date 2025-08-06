#include "header.hpp"


// Check if string contains only digits (allow leading '+')
static bool	hasNumber(std::string s)
{
	if (s[0] == '+')
		s = s.substr(1);
	if (!s.length())
		return false;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(s[i]))
			return false;
	}
	return true;
}

// Check if all characters are printable
static bool	hasNoPrintable(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!std::isprint(s[i]))
			return false;
	return true;
}

// Input helper: prompt until valid input
static std::string	promptInput(std::string prompt, bool number_check)
{
	std::string	res;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!std::getline(std::cin, res))
			ftExit();
		res = strip(res);
		if (!res.empty() && hasNoPrintable(res) && ((number_check && hasNumber(res)) || !number_check))
			break;
		std::cout << "Invalid" << std::endl;
	}
	return res;
}

// Main function: create and store a contact
void	addContact(PhoneBook &table)
{
	std::string	s;
	Contact		tmp;

	tmp.setFirstName(promptInput("first name", false));
	tmp.setLastName(promptInput("last name", false));
	tmp.setNickname(promptInput("nickname", false));
	tmp.setNumber(promptInput("phone number", true));
	tmp.setDarkestSecret(promptInput("darkest secret", false));
	table.addContact(tmp);
}
