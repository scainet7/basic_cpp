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
		int new_numb = rand()%20;
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
	return (0);
}