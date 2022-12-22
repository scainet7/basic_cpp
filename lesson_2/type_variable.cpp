#include <iostream>

int main()
{
	// Типы данных : числовые(int), символьные(char), логические(bool).
	// Числовые : целые(int, short, long), вещественные(float, double).
	// int - от -2147483648 до 2147483647 (4 байта).
	// short - от -32768 до 32767 (2 байта).
	// long - от -2147483648 до 2147483647 (4 байта).
	// float -  вещественные числа одинарной точности (4 байта).
	// double - вещественные числа двойной точности (8 байта).
	// char - описывает символ (1 байт).
	// bool - описывает логическое значение true/false (1 байт).
	int a, b = 3, c;
	float d = 21.33;
	bool e = false;
	char symb = 's';
	a = 21;
	std::cout << "type variable - int " << a << " " << b << " " << c << std::endl;
	std::cout << "type variable - float "<< d << std::endl;
	std::cout << "type variable - bool "<< e << std::endl;
	std::cout << "type variable - char "<< symb << std::endl;
	return (0);
}	