#include <iostream>
/*
for - цикл, принимающий 3 аргумента. Данный цикл проведет необходимое количество иттераций пока уловие истинно.
*/
int main()
{
	int i, n;

	n = 5;
	i = 0;
	std::cout << "Ferst cycle" << std::endl;
	for ( i = 0; i < 5; i++)
	{
		std::cout << n << std::endl;
		n++;
	}
	// std::cout << "Second cycle" << std::endl;
	// for ( ; i < 10; i++)
	// {
	// 	std::cout << n << std::endl;
	// 	n++;
	// }
	for (int s = 0, c = 9; s < 10 && c >= 0; s++, c--)
		std::cout << "s = " << s << " c = " << c << std::endl;
	return (0);
}