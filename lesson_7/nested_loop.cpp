#include <iostream>

int main()
{
	for (int i; i < 5; i++)
	{
		std::cout << "first cycle for " << i << std::endl;
		for (int j = 1; j < 5; j++)
			std::cout << "second cycle for " << j << std::endl;
	}
		return (0);
}