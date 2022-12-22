#include <iostream>
// Операторы :
// Унарные - принимает один операнд (++, --, sizof, !)
// Бинарные - принимает два операнда (*, /, +, -, ==, >, <, &&, ||)
// Тернарные -  принимает три операнда (?:)

int main()
{
	int a, b;

	std::cout << "Enter the first number a: ";
	std::cin >> a;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "Enter the second number b: ";
	std::cin >> b;
	std::cout << "a + b = " << a + b << std::endl;

	return (0);
}