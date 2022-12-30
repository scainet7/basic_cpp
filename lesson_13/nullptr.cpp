/*
NULL является литералом, представляющим пустую ссылку, которая не ссылается на объект. 
NULL является значением по умолчанию для переменных ссылочного типа. 
Обычные типы значений не могут иметь значение NULL, за исключением типов значений, допускающих значение NULL.

************************

nullptr — ключевое слово, введенное в C++11 для описания константы нулевого указателя.
Данная константа имеет тип std::nullptr_t. nullptr является константой r-value [en].
До введения nullptr, для обнуления указателей использовался макрос NULL, со значением 0 — целым типом.
Это вызывало проблемы (например, при перегрузке функций).
*/
#include <iostream>
#include <cstring>

int main()
{
	int *pa = new int;

	std::cout << pa << std::endl;
	std::cout << *pa << std::endl;
	*pa = 10;
	std::cout << pa << std::endl;
	std::cout << *pa << std::endl;
	delete pa; // освобождение памяти;
	pa = NULL;
	if (pa != nullptr)
		std::cout << pa << std::endl;
	// std::cout << *pa << std::endl; 
	// free (pa);
	return (0);
}