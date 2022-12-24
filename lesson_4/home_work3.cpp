#include <iostream>

int main()
{
	int a, b;
	char c;

	std::cout << "Enter 2 nambers\n";
	std::cin >> a >> b;
	std::cout << "Enter operator\n";
	std::cin >> c;
	switch (c)
	{
		case '+':
			std::cout << a << " + " << b << " = " << a + b << std::endl;
			break;
		case '-':
			std::cout << a << " - " << b << " = " << a - b << std::endl;
			break;
		case '*':
			std::cout << a << " * " << b << " = " << a * b << std::endl;
			break;
		case '/':
			std::cout << a << " / " << b << " = " << a / b << std::endl;
			break;
		case '%':
			std::cout << a << " % " << b << " = " << a % b << std::endl;
			break;
		default:
			std::cout << "ERROR\n";
		}
	return (0);
}