#include <iostream>

int main()
{
	int a, b;
	char c;

	c = '*';
	std::cout << "Enter width\n";
	std::cin >> a;
	std::cout << "Enter height\n";
	std::cin >> b;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
			std::cout << c;
		std::cout << std::endl;
	}
		return (0);
}