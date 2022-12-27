/*
Стек (англ. stack — стопка; читается стэк) — абстрактный тип данных, представляющий собой список элементов, организованных по принципу LIFO (англ. last in — first out, «последним пришёл — первым вышел»).

Рекурсия – определение части функции (метода) через саму себя, то есть это функция, которая вызывает саму себя, непосредственно (в своём теле) или косвенно (через другую функцию).
*/

#include <iostream>

int fuu(int i)
{
	i++;
	if (i == 10)
		return (i);
	std::cout << i << std::endl;
	return (fuu(i));
}

int main()
{
	int i;

	i = 0;
	i = fuu(i);
	std::cout << "i = " << i << std::endl;
	return (0);
}