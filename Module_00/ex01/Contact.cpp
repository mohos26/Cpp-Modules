#include "Contact.hpp"

// getters
std::string Contact::getFirstName(void)
{
	return firstName;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

std::string	Contact::getNickname(void)
{
	return nickname;
}

std::string	Contact::getNumber(void)
{
	return number;
}

std::string	Contact::getDarkestSecret(void)
{
	return darkestSecret;
}

// setters
void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setNumber(std::string number)
{
	this->number = number;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
