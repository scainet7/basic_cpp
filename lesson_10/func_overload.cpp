//Перегрузка функций — это механизм С++, благодаря которому функции с разным количеством или типами параметров могут иметь одинаковое имя (идентификатор).

#include <iostream>

int sum(int a, int b)
{
	return (a + b);
}

double sum(double a, double b)
{
	return (a + b);
}

int sum(int a, int b, int c)
{
	return (a + b + c);
}

int main()
{
	std::cout << sum(2, 3) << std::endl;
	std::cout << sum(6.3456, 82.234) << std::endl;
	std::cout << sum(2, 3, 234) << std::endl;
	return (0);
}