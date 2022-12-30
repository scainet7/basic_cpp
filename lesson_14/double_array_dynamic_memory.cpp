#include <iostream>

int main()
{
	int COL;
	int ROW;

	std::cout << "Enter ROW\n";
	std::cin >> ROW;
	std::cout << "Enter COL\n";
	std::cin >> COL;
	int **arr = new int *[ROW]; // инициируем память под строки;
	std::cout << "*******************************\n";
	for (int i = 0; i < ROW; i++)
		arr[i] = new int[COL]; // инициируем память под столбцы;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			arr[i][j] = rand() % 100; // заполняемм двумерный масив псевдо случайными числами;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			std::cout << arr[i][j] << "\t";
		std::cout <<  "\n";
	}
	for (int i = 0; i < ROW; i++)
		delete[] arr[i]; // чистим ячейки столбцов;
	delete[] arr;		 // чистим ячейки строк;
	return (0);
}