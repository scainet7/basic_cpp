#include <iostream>
#include <ctime>

int main()
{
	int i[10];
	// int a;
	
	srand(time(NULL));	  // srand - точка отсчета // time(NULL) - отсчет времени от 1-го января от 70-го года
	// a = rand()%100;  // rand - генерирует псевдослучайные числа // % - такое деление помогает настройть диапазон генерирования чисел
	for (int l = 0; l < 10; l++)
		i[l] = rand()%100;;
	for (int l = 0; l < 10; l++)
		std::cout << i[l] << std::endl;
	return (0);
}