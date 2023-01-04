#include <iostream>

int main()
{
	char str[] = "Hello";
	char *string = str;
	char *str_arr[] = {"Hello " ,"World" , "!\n"};

	std::cout << string << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i];
	return (0);
}