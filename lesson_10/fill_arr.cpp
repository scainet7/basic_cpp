#include <iostream>

void FillArray(int arr[], const int size); // Прототипы функции для того чтобы можно было писать функции не по порядку
void PrintArray(int arr[], const int size);

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand()%10;
}

void PrintArray(int arr[],const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << std::endl;
}

int main()
{
	int SIZE;
	SIZE = 10;
	int arr[SIZE];

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);
	return (0);
}