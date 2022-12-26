// inline -  ключевое слово указывает компилятору заменить код в определении функции для каждого экземпляра вызова функции.

#include <iostream>

inline int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	std::cout << sum(5, 6);
	return (0);
}