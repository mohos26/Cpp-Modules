#include "header.hpp"


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

static bool	hasNoPrintable(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!std::isprint(s[i]))
			return false;
	return true;
}

static std::string	aidFt(std::string prompt, bool number_check)
{
	std::string	res;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!std::getline(std::cin, res))
			Exit();
		res = strip(res);
		if (!res.empty() && hasNoPrintable(res) && ((number_check && hasNumber(res)) || !number_check))
			break;
		std::cout << "Invalid" << std::endl;
	}
	return res;
}

void	addContact(PhoneBook &table)
{
	std::string	s;
	Contact		tmp;

	tmp.setFirstName(aidFt("first name", false));
	tmp.setLastName(aidFt("last name", false));
	tmp.setNickname(aidFt("nickname", false));
	tmp.setNumber(aidFt("phone number", true));
	tmp.setDarkestSecret(aidFt("darkest secret", false));
	table.addContact(tmp);
}
