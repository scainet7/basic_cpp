// Функция - конструкция, позволяющая вынести отдельный код за пределы основоного и вызывать ее по не обходимости
/*
возвращаемое_значение имя_функции (параметры)
{
	блок_повторяющегося_кода (тело);
}
*/

#include <iostream>

void function()
{
	std::cout << "You cool function!\n";
}

int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	int c;
	function(); // вызов функции

	c = sum(2, 3);
	std::cout << c /* << sum(2, 3)*/ << std::endl;
	return (0);
}