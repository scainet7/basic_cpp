#include <iostream>

int main()
{
	int a;

	std::cout << "Enter number\n";
	std::cin >> a;
	switch (a) // тело функции кейс
	{
	case 1: // если введенное число или символ совпадет с "1" то выполниться этот кейс
		std::cout << "You enter " << a << std::endl;
		break; // выход из кейса
	case 2:
		std::cout << "You enter " << a << std::endl;
		break;
	default: // выполнятьется по умолчанию если ни один кейс не совпал
		std::cout << "I don't know this number\n";
		break;
	}
	return (0);
}