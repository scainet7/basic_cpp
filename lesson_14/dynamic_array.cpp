#include <iostream>
#include <string>

int main()
{
	int size = 0;
	
	std::cout << "Enter array size!\n";
	std::cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;
	for (int i = 0; i < size; i++)
	{
		std::cout << "№ " << i << std::endl;
		std::cout << "arr = " << arr[i] << std::endl;
		std::cout << "&arr = "<< arr + i << std::endl;
		std::cout << "arr = " << *(arr + i) << std::endl;
		std::cout << "**************************"<< std::endl;
	}
	delete [] arr;
	return (0);
}