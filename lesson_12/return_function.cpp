#include <iostream>

void foo(int *a, int *b, int *c)
{
	(*a)++;
	(*b)--;
	(*c) /= 2;
}

int main()
{
	int a, b, c;

	a = 0;
	b = 12;
	c = 11;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "==========\n";
	foo(&a, &b, &c);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	return (0);
}