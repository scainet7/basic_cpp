/*
������� ��������� ��������, ������� ���� ����������� ��������� ������������� ����� ��������� ���� ����� ���������.
���� ������� ���������� �������� ����������� � ������ ������������ �������, �������� �� ���� ������������� ������������ ����������� � ����, ������� ���������� � ������������ ������ ����������� ������ ����� ���������.

C����� ����������������� ����������� �������� ���������� �������� #if, #else, #elif � #endif.
��� ���� ����������� � ����������� �� �������� ������������ ��������� �������� ��� ��������� �� ��� ���� ����� ����.

� ����� ���� ��������� #if �������� ����� �������:

#if ����������� ���������
    ������������������ ����������
#endif
*/

#include <iostream>
#define DEBAG
//#define UF 5

int main()
{
    #ifdef DEBAG
        std::cout << "Start cycle!\n";
    #endif //DEBAG
    for (int i = 0; i < 4; i++)
        std::cout << i << std::endl;
    #ifdef DEBAG
        std::cout << "End cycle\n";
    #endif //DEBAG
    std::cout << "**********\n";
    #ifdef DEBAG
        std::cout << "Debag opredelen\n";
    #else
        std::cout << "Debag not opredelen\n";
    #endif //DEBAG
    std::cout << "**********\n";
    #ifndef DEBAG
        std::cout << "Debag opredelen lol\n";
    #else
        std::cout << "Debag not opredelen lol\n";
    #endif //DEBAG
    std::cout << "**********\n";
    #if UF < 4
        std::cout << "Cout 1\n";
    #elif UF == 5
        std::cout << "Cout 2\n";
    #endif
    return (0);
}