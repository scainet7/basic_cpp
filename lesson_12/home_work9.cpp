#include <iostream>

void foo(int *a, int *b)
{
	int c;

	c = (*a);
	(*a) = (*b);
	(*b) = c;
}

int main()
{
	int a, b;

	a = 0;
	b = 12;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "==========\n";
	foo(&a, &b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	return (0);
}