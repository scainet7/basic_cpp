#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
// continue - ключевле слово, которое при попадание на данную строку заканцивает иттерацию и начинает следующую
		std::cout << "Varible i = " << i << std::endl;
	}
	return (0);
}