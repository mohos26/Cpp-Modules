#include "Harl.hpp"


int main()
{
	Harl	harl;

	// call complain with different levels
	harl.complain("debug");
	harl.complain("error");
	harl.complain("info");
	harl.complain("warning");

	std::cout << "***************" << std::endl;

	// call functions directly
	harl.debug();
	harl.error();
	harl.info();
	harl.warning();
	return 0;
}
