#include "iter.hpp"
#include <string>
#include <iostream>

void addOne(int & num)
{
	num++;
}

void toUp(char &c)
{
	c = std::toupper(c);
}

int main()
{
	int tab[14] = {9, 8, 7, 6, 5, 50,654,64,21,354,84,68,123, 0};
	::iter(tab, 14, addOne);
	int i = 0;
	while (i < 14)
	{
		std::cout << tab[i] << std::endl;
		i++;
	}
	char str[18] = "Helloooooo 123!@#";
	::iter(str, 18, toUp);
	std::cout << str << std::endl;

	::iter(str, 18, addOne2);
	std::cout << str << std::endl;
	return (0);
}