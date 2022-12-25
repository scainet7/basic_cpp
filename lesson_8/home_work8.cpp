#include <iostream>
#include <ctime>

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	bool flag;

	srand(time(NULL));
	for (int i = 0; i < SIZE; )
	{	
		flag = false;
		int new_numb = rand()%10000;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == new_numb)
			{
				flag = true;
				break ;
			}
		}
		if (!flag)
		{
			arr[i] = new_numb;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++)
		std::cout << arr[i] << std::endl;
	flag = true;
	int n = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (n > arr[i])
			n = arr[i];
	}
	std::cout << "Min = "<< n << std::endl;
	return (0);
}