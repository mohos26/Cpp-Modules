#include <iostream>
#include <string>


// Convert a string to uppercase
static std::string	toUpperCase(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

int main(int ac, char **av)
{
	std::string	res = "";

	// If no arguments, print default message
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		// Loop through arguments and append uppercased text
		for (size_t i = 1; i < ac; i++)
			res.append(toUpperCase(av[i]));
		std::cout << res << std::endl;
	}
	return 0;
}
