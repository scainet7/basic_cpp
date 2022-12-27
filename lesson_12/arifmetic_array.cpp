#include <iostream>

int main()
{
	const int size = 10;
	int arr[size];
	int *p_arr;

	p_arr = arr;
	for(int i = 0; i < 10; i++)
		arr[i] = size - i;
	std::cout << "==========\n";
	std::cout << arr << std::endl;
	std::cout << p_arr << std::endl;
	std::cout << "==========\n";
	for (int i = 0; i < size; i++)
		std::cout << p_arr[i] << std::endl;
	std::cout << "==========\n";
	for (int i = 0; i < size; i++)
		std::cout << (arr + i) << std::endl;
	std::cout << "==========\n";
	for (int i = 0; i < size; i++)
		std::cout << *(p_arr + i) << std::endl;
	return (0);
}