#include <iostream>

void foo(int *a)
{
	(*a)++; //сначала опаерция разименования потом постфтксный инкремент
}

int main()
{
	int a;

	a = 0;
	std::cout << "a = " << a << std::endl;
	std::cout << "==========\n";
	foo(&a);// & - адрес ячейки памяти 
	std::cout << "a = " << a << std::endl;
	// std::cout << "==========\n";
	return (0);
}