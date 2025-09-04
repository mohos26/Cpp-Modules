#include "Harl.hpp"


// print debug message
void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Debug: Checking the cheese… it seems happy to join the burger." << std::endl;
}


// print info message
void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Info: Your extra slice of cheese has been added to the burger. Kitchen flow is on schedule." << std::endl;
}


// print warning message
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Warning: The fryer is taking longer than expected. Your fries might be a bit late." << std::endl;
}

// print error message
void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Error: The grill just went cold in the middle of cooking! Immediate chef intervention required!" << std::endl;
}
