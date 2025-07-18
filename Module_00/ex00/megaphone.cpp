#include <iostream>
#include <string>

static std::string	ft_aid(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

int main(int ac, char **av)
{
	std::string	res = "";
	size_t		len = 0;

	res = "";
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		len = 0;
		while (av && av[len])
			len++;
		for (size_t i = 1; i < len; i++){
			res.append(ft_aid(av[i]));
		}
		std::cout << res << std::endl;
	}
	return 0;
}
