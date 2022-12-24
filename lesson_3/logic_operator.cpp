/* 
	Операторы сравнения

> - больше
< - меньше
>= - меньше/равно
<= - больше/равно

	операторы равенства

== - равно
!= - не равно

	Логические операторы обьединения и отрицательная инверсия

&& - и
|| - или 
!= - не
*/

#include <iostream>

int main()
{
	int a, b;

	a = 24;
	b = 12;
	std::cout << "<	" << (4 < 5) << std::endl;
	std::cout << ">	" <<  (4 > 5) << std::endl;
	std::cout << "<=	" <<  (4 <= 4) << std::endl;
	std::cout << ">=	" <<  (4 >= 5) << std::endl;
	std::cout << "!=	" <<  (4 != 5) << std::endl;
	std::cout << "==	" <<  (4 == 5) << std::endl;
	std::cout << "||	" <<  (a == b || a > b) << std::endl;
	std::cout << "&&	" <<  (a == b && a < b) << std::endl;
	std::cout << "!	" <<  (!a) << std::endl;
	return (0);
}