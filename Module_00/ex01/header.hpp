#ifndef HEADER_H
# define HEADER_H

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

void		addContact(PhoneBook &table);
void		showTable(PhoneBook table);
std::string	strip(std::string s);
void		Exit(void);

#endif
