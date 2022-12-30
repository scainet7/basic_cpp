#include <iostream>

void fill_array(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;
}

void show_array(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << "\t";
	std::cout << std::endl;
}

int main()
{
	int size;

	std::cout << "Enter size for array\n";
	std::cin >> size;
	int *arr = new int[size];
	fill_array(arr, size);
	show_array(arr, size);
	delete[] arr; // чистим ячейки строк;
	return (0);
}