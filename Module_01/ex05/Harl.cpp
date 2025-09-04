#include "Harl.hpp"


// print debug message
void	Harl::debug(void)
{
	std::cout << "Debug: Checking the cheese… it seems happy to join the burger." << std::endl;
}


// print info message
void	Harl::info(void)
{
	std::cout << "Info: Your extra slice of cheese has been added to the burger. Kitchen flow is on schedule." << std::endl;
}


// print warning message
void	Harl::warning(void)
{
	std::cout << "Warning: The fryer is taking longer than expected. Your fries might be a bit late." << std::endl;
}

// print error message
void	Harl::error(void)
{
	std::cout << "Error: The grill just went cold in the middle of cooking! Immediate chef intervention required!" << std::endl;
}


// call the correct function based on level
void	Harl::complain(std::string level)
{
	void	(Harl::*ptrFunc[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lst[] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (lst[i] == level)
		{
			(this->*ptrFunc[i])();
			return ;
		}
	}
	std::cout << "!!! Unknown level !!!" << std::endl;
}
