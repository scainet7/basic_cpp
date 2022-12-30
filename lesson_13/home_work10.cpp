#include <iostream>
#include <cstring>

template <typename T>
void ft_swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	double a;
	double b;

	a = 543;
	b = 12.43;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "=======\n";
	ft_swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	return (0);
}