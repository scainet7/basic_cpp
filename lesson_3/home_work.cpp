#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "Enter the first number a: ";
	std::cin >> a;
	std::cout << "Enter the second number b: ";
	std::cin >> b;
	std::cout << "Enter the third number c: ";
	std::cin >> c;
	std::cout << "summ : a + b + c = " << a + b + c << std::endl;
	std::cout << "product of three numbers : a * b * c = " << a * b * c << std::endl;
	std::cout << "arithmetic mean : (a + b + c) / 3 = " << (double)(a + b + c) / 3 << std::endl;
	return (0);
}