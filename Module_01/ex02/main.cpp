#include <string>
#include <iostream>
#include <iomanip>


int main()
{
	std::string	s;
	std::string	*stringPTR;
	std::string	&stringREF = s;

	s = "HI THIS IS BRAIN";
	stringPTR = &s;

	std::cout << "-------------------- address -------------------" << std::endl;
	std::cout << std::setw(23) << std::left << "The string address: " << &s << std::endl;
	std::cout << std::setw(23) << std::left << "The pointer address: " << &stringPTR << std::endl;
	std::cout << std::setw(23) << std::left << "The reference address: " << &stringREF << std::endl;
	std::cout << "--------------------- value --------------------" << std::endl;
	std::cout << std::setw(23) << std::left << "The string value: " << s << std::endl;
	std::cout << std::setw(23) << std::left << "The pointer value: " << *stringPTR << std::endl;
	std::cout << std::setw(23) << std::left << "The reference value: " << stringREF << std::endl;
	std::cout << "-------------- change string value -------------" << std::endl;
	s = "HI THIS IS SECOND BRAIN";
	std::cout << std::setw(23) << std::left << "The string value: " << s << std::endl;
	std::cout << std::setw(23) << std::left << "The pointer value: " << *stringPTR << std::endl;
	std::cout << std::setw(23) << std::left << "The reference value: " << stringREF << std::endl;
	std::cout << "------------- change pointer value -------------" << std::endl;
	*stringPTR = "HI THIS IS THIRD BRAIN";
	std::cout << std::setw(23) << std::left << "The string value: " << s << std::endl;
	std::cout << std::setw(23) << std::left << "The pointer value: " << *stringPTR << std::endl;
	std::cout << std::setw(23) << std::left << "The reference value: " << stringREF << std::endl;
	std::cout << "------------ change reference value ------------" << std::endl;
	stringREF = "HI THIS IS FOURTH BRAIN";
	std::cout << std::setw(23) << std::left << "The string value: " << s << std::endl;
	std::cout << std::setw(23) << std::left << "The pointer value: " << *stringPTR << std::endl;
	std::cout << std::setw(23) << std::left << "The reference value: " << stringREF << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	return 0;
}
