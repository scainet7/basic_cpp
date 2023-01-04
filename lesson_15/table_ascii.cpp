/*
Таблица ASCII - ASCII ( от англ. American Standard Code for Information Interchange) — американский стандартный код для обмена информацией.
ASCII представлена в виде таблицы печатных символов и некоторых специальных управляющих символов, каждому символу соответствует уникальный код в диапазоне от [0;255].
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 0; i <= 255; i++)
		std::cout << "code =	" << i << "	char = 	" << (char)i << std::endl;
	return (0);
}