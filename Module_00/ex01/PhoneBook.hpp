#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	lst[8];
		int		length;
		int		count;
	public:
		// Constructor
		PhoneBook() {
			length = 0;
			count = 0;
		}
		Contact	getContact(int i);
		Contact	*getAllContact(void);
		int		getLength(void);
		void	addContact(Contact user);
};

#endif
