#include <iostream>

void foo(int &a, int &b, int &c)
{
	a = 10;
	b *= 2;
	c -= 100;
}

int main()
{
	int a;
	int b;
	int c;

	a = 0;
	b = 123;
	c = 34;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "=========\n";
	foo(a, b, c);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	return (0);
}