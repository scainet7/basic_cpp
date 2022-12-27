// Вычисление факториала числа
// N! = N * (N - 1)!
#include <iostream>

int facturial(int f)
{
	if (f == 0)
		return (0);
	if (f == 1)
		return(1);
	return (f * facturial(f - 1));
}

int main()
{
	int n, f;

	std::cout << "Enter number for used factorial!\n";
	std::cin >> n;
	f = facturial(n);
	std::cout << "Factorial = " << f << std::endl;
	return (0);
}