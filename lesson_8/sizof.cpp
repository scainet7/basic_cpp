//sizof - возвращает длину в байтах либо типа данных либо переменной которую мы используем вместе с ключевым словом

#include <iostream>

int main()
{
	int arr[] = {12, 23456, 657, 879, 123, 3456, 678, 980};

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		std::cout <<  arr[i] << std::endl;
	// for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	// 	std::cout <<  arr[i] << std::endl;
	return (0);
}