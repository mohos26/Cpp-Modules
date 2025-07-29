#include "header.hpp"


static std::string	aidFt2(std::string s)
{
	if (s.length() > 10)
		return s.substr(0, 9) + ".";
	return s;
}

static int	aidFt3(int length)
{
	int			res;
	std::string	s;

	while (true)
	{
		std::cout << "Index: ";
		if (!getline(std::cin, s))
			Exit();
		s = strip(s);
		while (s[0] == ' ')
			s = s.substr(1);
		while (s[0] == '0' && s.length() - 1)
			s = s.substr(1);
		if (s.length() == 1 && std::isdigit(s[0]))
		{
			res = s[0] - 48;
			if (res < length)
				break;
		}
		std::cout << "Invalid" << std::endl;
	}
	return res;
}

void	showTable(PhoneBook table)
{
	Contact	aid;

	if (!table.getLength())
	{
		std::cout << "No Contact To Show It!" << std::endl;
		return ;
	}
	std::cout << std::setfill(' ') << "   Index  " << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << " Nickname " << "|" << std::endl;
	for (int i = 0; i < table.getLength(); i++)
	{
		aid = table.getContact(i);
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << aidFt2(aid.getFirstName()) << "|";
		std::cout << std::setw(10) << aidFt2(aid.getLastName()) << "|";
		std::cout << std::setw(10) << aidFt2(aid.getNickname()) << "|" << std::endl;
	}
	aid = table.getContact(aidFt3(table.getLength()));
	std::cout << "First Name: " << aid.getFirstName() << std::endl;
	std::cout << "Last Name: " << aid.getLastName() << std::endl;
	std::cout << "Nickname: " << aid.getNickname() << std::endl;
	std::cout << "Phone Number: " << aid.getNumber() << std::endl;
	std::cout << "Darkest Secret: " << aid.getDarkestSecret() << std::endl;
}
