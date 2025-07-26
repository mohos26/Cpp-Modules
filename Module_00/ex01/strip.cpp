#include "header.hpp"


std::string	strip(std::string s)
{
	size_t	start = 0;
	size_t	end = s.length();

	while (start < s.length() && std::isspace(s[start]))
		start++;
	if (start == s.length())
		return "";
	if (end)
		end--;
	while (end >= 0 && std::isspace(s[end]))
		end--;
	return s.substr(start, end - start + 1);
}
