#include <iostream>
#include <string>
#include <fstream>


void	ftExit(std::string message)
{
	std::cerr << message << std::endl;
	exit(1);
}

std::string	readFile(std::string fileName)
{
	std::ifstream	baseFile(fileName);
	std::string	aid = "";
	std::string	res = "";

	if(!baseFile)
		ftExit("Error: Cannot open file '" + fileName + "' for reading.");
	while (std::getline(baseFile, aid))
	{
		res.append(aid);
		if (!baseFile.eof())
			res.push_back('\n');
	}
	baseFile.close();
	std::cout << res;
	return res;
}

std::string	ftReplace(std::string base, std::string s1, std::string s2)
{
	std::string	res = "";

	for (size_t i = 0; i < base.length(); i++)
	{
		if (base.find(s1, i) == i)
		{
			res.append(s2);
			i += (s1.length() - 1) * bool(s1.length());
		}
		else
			res.push_back(base[i]);
	}
	return res;
}

int main(int ac, char **av)
{
	if (ac != 4)
		ftExit("Usage: " + std::string(av[0]) + " <filename> <s1> <s2>");
	std::string	fileName = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	res = "";

	if (s1.empty())
		ftExit("Error: s1 cannot be empty.");

	res = readFile(fileName);

	res = ftReplace(res, s1, s2);

	std::ofstream	replaceFile(fileName + ".replace");
	if (!replaceFile)
		ftExit("Error: Cannot open file '" + fileName + ".replace' for writing.");
	replaceFile << res;
	replaceFile.close();
	return (0);
}