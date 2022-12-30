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

void coppy_array(const int *const arr1, int *const arr2, const int size)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}

int ft_push_back(int *&arr, const int size, const int value)
{
	int *new_arr = new int[size + 1];
	
	for (int i = 0; i < size; i++)
		new_arr[i] = arr[i];
	new_arr[size] = value;
	delete[] arr;
	arr = new_arr;
	return (size + 1);
}

int ft_pop_back(int *&arr, const int size)
{
	int *new_arr = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
		new_arr[i] = arr[i];
	delete[] arr;
	arr = new_arr;
	return (size - 1);
}

int ft_push_forward(int *&arr, const int size, const int value)
{
	int *new_arr = new int[size + 1];
	
	for (int i = 1; i < size; i++)
		new_arr[i] = arr[i];
	new_arr[0] = value;
	delete[] arr;
	arr = new_arr;
	return (size + 1);
}

int ft_pop_forward(int *&arr, const int size)
{
	int *new_arr = new int[size - 1];

	for (int i = 1; i < size; i++)
		new_arr[i - 1] = arr[i];
	delete[] arr;
	arr = new_arr;
	return (size - 1);
}

int ft_push_between(int *&arr, const int size, const int value, const int index)
{
	int *new_arr = new int[size + 1];
	
	for (int i = 0; i < index; i++)
		new_arr[i] = arr[i];
	new_arr[index] = value;
	for (int i = index + 1; i < size + 1; i++)
		new_arr[i] = arr[i - 1];
	delete[] arr;
	arr = new_arr;
	return (size + 1);
}

int ft_pop_between(int *&arr, const int size, const int index)
{
	int *new_arr = new int[size - 1];

	if (index == 0)
		for (int i = 1; i < size; i++)
			new_arr[i - 1] = arr[i];
	else if (index == size)
		for (int i = 0; i < size - 1; i++)
			new_arr[i] = arr[i];
	else
	{
		for (int i = 0; i < index; i++)
			new_arr[i] = arr[i];
		for (int i = index + 1; i < size; i++)
			new_arr[i] = arr[i - 1];
	}
	delete[] arr;
	arr = new_arr;
	return (size - 1);
}

int main()
{
	int size, value, index;

	std::cout << "Enter size for array\n";
	std::cin >> size;
	std::cout << "Enter number\n";
	std::cin >> value;
	int *arr = new int[size];
	fill_array(arr, size);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	size = ft_push_back(arr, size, value);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	size = ft_pop_back(arr, size);
	size = ft_pop_back(arr, size);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	size = ft_push_forward(arr, size, value);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	size = ft_pop_forward(arr, size);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	std::cout << "Enter index\n";
	std::cin >> index;
	size = ft_push_between(arr, size, value, index);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	std::cout << "****************************************\n";
	std::cout << "Enter index\n";
	std::cin >> index;
	size = ft_pop_between(arr, size, index);
	show_array(arr, size);
	std::cout << "size = " << size << std::endl;
	delete[] arr;
	return (0);
}