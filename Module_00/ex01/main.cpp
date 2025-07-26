#include "header.hpp"


int main()
{
	std::string	prompt;
	PhoneBook	table;
	std::string	s;

	while (true)
	{
		std::cout << "PhoneBook>$ ";
		if (!std::getline(std::cin, prompt))
			Exit();
		prompt = strip(prompt);
		if (prompt == "ADD")
			addContact(table);
		else if (prompt == "SEARCH")
			showTable(table);
		else if (prompt == "EXIT")
			Exit();
		else
			std::cout << "Invalid; Did You Mean {ADD, SEARCH, EXIT}" << std::endl;
	}
	return 0;
}
