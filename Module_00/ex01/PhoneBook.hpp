#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	lst[8]; // stores 8 contacts max
		int		length; // number of stored contacts
		int		count;  // index for circular overwrite
	public:
		// Constructor
		PhoneBook();
		Contact	getContact(int i);
		Contact	*getAllContact(void);
		int		getLength(void);
		void	addContact(Contact user);
};

#endif
