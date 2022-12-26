//аргументы по умочанию
#include <iostream>

void function(int a = 5) // int a = 5 параметр по умолчанию записывается в аргументах функции
{
	for (int i = 0; i < a; i++)
		std::cout << "#\n";
}

int main()
{
	function();
	return (0);
}