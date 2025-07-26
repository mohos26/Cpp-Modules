#include "Contact.hpp"

// getters
std::string Contact::getFirstName(void)
{
	return Contact::first_name;
}

std::string	Contact::getLastName(void)
{
	return Contact::last_name;
}

std::string	Contact::getNickname(void)
{
	return Contact::nickname;
}

std::string	Contact::getNumber(void)
{
	return Contact::number;
}

std::string	Contact::getDarkestSecret(void)
{
	return Contact::darkest_secret;
}

// setters
void	Contact::setFirstName(std::string first_name)
{
	Contact::first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	Contact::last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	Contact::nickname = nickname;
}

void	Contact::setNumber(std::string number)
{
	Contact::number = number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	Contact::darkest_secret = darkest_secret;
}
