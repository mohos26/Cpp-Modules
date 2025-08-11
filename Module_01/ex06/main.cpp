#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl		harl;
	std::string	lst[] = {"debug", "info", "warning", "error"};
	int			res = -1;

	if (ac != 2)
	{
		std::cerr << "error" << std::endl;
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		if (lst[i] == std::string(av[1]))
			res = i;
	}
	switch (res)
	{
		case 0:
			harl.debug();
		case 1:
			harl.info();
		case 2:
			harl.warning();
		case 3:
			harl.error();
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
