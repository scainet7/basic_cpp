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
// функция для копирования одного массива в другой;
void coppy_array(const int *const arr1, int *const arr2, const int size)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}

int main()
{
	int size;

	std::cout << "Enter size for array\n";
	std::cin >> size;
	int *arr1 = new int[size];
	int *arr2 = new int[size];
	fill_array(arr1, size);
	show_array(arr1, size);
	std::cout << "****************************************\n";
	coppy_array(arr1, arr2, size);
	show_array(arr2, size);
	std::cout << "****************************************\n";
	std::cout << &arr1 << std::endl;
	std::cout << &arr2 << std::endl;
	delete[] arr1;
	delete[] arr2;
	return (0);
}