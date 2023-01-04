/*
Указатель на функцию (function pointer) хранит адрес функции.
По сути указатель на функцию содержит адрес первого байта в памяти, по которому располагается выполняемый код функции.

Самым распространенным указателем на функцию является ее имя.
С помощью имени функции можно вызывать ее и получать результат ее работы.

Но также указатель на функцию мы можем определять в виде отдельной переменной с помощью следующего синтаксиса:
тип (*имя_указателя) (параметры);

*/

#include <iostream>
#include <cstring>
#include <string>

int Foo1(int a)
{
	std::cout << "void Foo1()\n";
	return (a - 1);
}

int Foo2(int a)
{
	std::cout << "void Foo2()\n";
	return (a * 2);
}

std::string DataInfo()
{
	return ("Data lol");
}

void ShowInfo(std::string (*Foo)())
{
	std::cout << Foo() << std::endl;
}

int main()
{
	int (*fooPointer)(int a);
	fooPointer = Foo1;
	std::cout << fooPointer(5) << std::endl;
	ShowInfo (DataInfo);
	return (0);
}