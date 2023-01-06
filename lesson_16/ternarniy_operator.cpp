#include <iostream>

int main()
{
    int a;

    std::cout << "Enter numb\n";
    std::cin >> a;
    if (a < 10)
         std::cout << "a < 10\n";
    else if (a == 10)
         std::cout << "a = 10\n";
    else
         std::cout << "a > 10\n";
    std::cout << "***********\n";
    (a < 10) ? ( std::cout << "a < 10\n") : (a == 10) ? ( std::cout << "a = 10\n") : ( std::cout << "a > 10\n");
    std::cout << "***********\n";
	return (0);
}