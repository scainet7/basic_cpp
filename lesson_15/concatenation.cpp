/*
Конкатенация строк – это процесс объединения двух или нескольких строк в одну новую строку.
Конкатенация выполняется с помощью оператора +.
Символ + также является оператором сложения в математических операциях.

Класс string предназначен для работы со строками типа char*, которые представляют собой строку с завершающим нулем. Класс string был
*/
#include <iostream>
#include <cstring>
#include <string>

int main()
{
	char str1[255] = "Hello ";
	char str2[255] = "World!";
	char *res[255];
	std::string str1_2 = "Hello";
	std::string str2_2 = "World";
	std::string res_2;

	*res = NULL;
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << "*********************\n";
	*res = strcat(str1, str2);
	std::cout << *res << std::endl;
	std::cout << "*********************\n";
	res_2 = str1_2 + " " + str2_2 + "!";
	std::cout << res_2 << std::endl;
	return (0);
}