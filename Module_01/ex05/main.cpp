#include "Harl.hpp"


int main()
{
	Harl	harl;

	harl.complain("debug");
	harl.complain("error");
	harl.complain("info");
	harl.complain("warning");
	std::cout << "***************" << std::endl;
	harl.debug();
	harl.error();
	harl.info();
	harl.warning();
	return 0;
}
