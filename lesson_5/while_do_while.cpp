// while - цикл который отрабатывает действия пока условие истbнно
// do while - цикл который выполниться хотябы один раз даже если условие изначально ложно
#include <iostream>

int main()
{
	int a;

	a = 0;
	while (a < 10)
	{
		std::cout << "Varible a = " << a << std::endl;
		a++;
	}
	do 
	{
		std::cout << "The end!\n";
		a++;
	} while (a < 10);
	std::cout << "Varible a = " << a << std::endl;
	return (0);
}
