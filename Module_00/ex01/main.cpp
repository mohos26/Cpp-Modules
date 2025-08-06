#include "header.hpp"


// Command loop
int main()
{
	std::string	prompt;
	PhoneBook	table;

	while (true)
	{
		std::cout << "PhoneBook>$ ";
		if (!std::getline(std::cin, prompt))
			ftExit();
		prompt = strip(prompt);
		if (prompt == "ADD")
			addContact(table);
		else if (prompt == "SEARCH")
			showTable(table);
		else if (prompt == "EXIT")
			ftExit();
		else
			std::cout << "Invalid; Did You Mean {ADD, SEARCH, EXIT}" << std::endl;
	}
	return 0;
}
