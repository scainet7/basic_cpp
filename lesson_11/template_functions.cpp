/*
Шабло́ны (англ. template) — средство языка C++, предназначенное для кодирования обобщённых алгоритмов, без привязки к некоторым параметрам (например, типам данных, размерам буферов, значениям по умолчанию).
В C++ возможно создание шаблонов функций и классов.
Шаблоны позволяют создавать параметризованные классы и функции. Параметром может быть любой тип или значение одного из допустимых типов (целое число, enum, указатель на любой объект с глобально доступным именем, ссылка).
*/

template <typename T1, typename T2> // T1 и T2 - шаблоны параметров
	T1 sum(T1 a, T2 b)
{
	return (a + b);
}

#include <iostream>

int main()
{
	std::cout << sum(2.2345, 1) << std::endl;
	return (0);
}