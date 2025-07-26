# include "PhoneBook.hpp"
# include "Contact.hpp"

Contact	PhoneBook::getContact(int i)
{
	return PhoneBook::lst[i];
}

Contact	*PhoneBook::getAllContact(void)
{
	return PhoneBook::lst;
}

int		PhoneBook::getLength(void)
{
	return PhoneBook::length;
}

void	PhoneBook::addContact(Contact user)
{
	PhoneBook::lst[PhoneBook::count] = user;
	if (PhoneBook::length != 8)
		PhoneBook::length++;
	PhoneBook::count++;
	PhoneBook::count %= 8;
}
