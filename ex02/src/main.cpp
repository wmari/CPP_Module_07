#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main()
{
	try 
	{
		Array<int>	ArrayInt(20);
		
		for (int i = 0; i < 20; ++i)
			ArrayInt[i] = i * 3;
		std::cout << "Taille de ArrayInt: " << ArrayInt.size() << "\n";
		for (int i = 0; i < 20; ++i)
			std::cout << ArrayInt[i] << " ";
		std::cout << "\n\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}