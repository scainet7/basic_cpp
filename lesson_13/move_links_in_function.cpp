#include <iostream>

void foo1(int a)
{
	a = 1;
}
void foo2(int &a)
{
	a = 2;
}

void foo3(int *a)
{
	(*a) = 3;
}


int main()
{
	int a;
	int &b = a;
	int *c = &a;

	a = 0;
	std::cout << "a = " << a << std::endl;
	std::cout << "==========\n";
	std::cout << "a =\n";
	foo1(a);
	std::cout << a << std::endl;
	std::cout << "a =\n";
	foo2(b);
	std::cout << a << std::endl;;
	std::cout << "a =\n";
	foo3(c);
	std::cout << a << std::endl;;
	return (0);
}