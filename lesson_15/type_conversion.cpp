/*
С++ позволяет нам преобразовывать данные одного типа в данные другого – это известно как преобразование типов.
В C++ существует два типа преобразования: 
*	Неявное преобразование.
*	Явное преобразование (также известное, как приведение типов).

Преобразование типа, которое автоматически выполняется компилятором, известно как неявное преобразование.
Этот тип также известен, как автоматическое преобразование.

Когда пользователь в C++ вручную меняет данные с одного типа на другой, это называется явным преобразованием.
Этот тип преобразования также известен, как приведение типов.
Есть три основных способа использования явного преобразования в C++:
*	Приведение типов в C-style (также известное, как обозначение приведения);
*	Обозначение функций (также известное, как приведение типов в старом стиле С++);
*	Операторы преобразования типов.
*/

#include <iostream>

int main()
{
	int a = 33.33;
	int b = 0;
	int g = -21345;
	double c = 33.12;
	double d = 71.34;

	std::cout << "int	" << (int)c << std::endl;
	std::cout << "float	" << (float)c << std::endl;
	std::cout << "***********************\n";
	std::cout << "bool	" << (bool)a << std::endl;
	std::cout << "bool	" << (bool)b << std::endl;
	std::cout << "bool	" << (bool)g << std::endl;
	std::cout << "***********************\n";
	std::cout << "char	" << (char)c << std::endl;
	std::cout << "char	" << (char)d << std::endl;
	return (0);
}