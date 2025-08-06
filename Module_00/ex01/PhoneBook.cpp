# include "PhoneBook.hpp"
# include "Contact.hpp"

// Init phonebook
PhoneBook::PhoneBook()
{
	length = 0;
	count = 0;
}

Contact	PhoneBook::getContact(int i)
{
	return lst[i];
}

Contact	*PhoneBook::getAllContact(void)
{
	return lst;
}

int		PhoneBook::getLength(void)
{
	return length;
}

// Add new contact in circular buffer style (max 8)
void	PhoneBook::addContact(Contact user)
{
	lst[count] = user;
	if (length != 8)
		length++;
	count++;
	count %= 8; // loop index
}
