#include <iostream>

int main()
{
	int a;

	std::cout << "Enter number\n";
	std::cin >> a;
	if (a % 2 == 0)
		std::cout << "Even number\n";
	else
		std::cout << "The number is not even\n";
	return (0);
}