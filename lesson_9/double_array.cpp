#include <iostream>
#include <ctime>

int main()
{
	int ROW;
	int COL;

	ROW = 5;
	COL = 5;
	int n[ROW][COL];
	srand(time(NULL));
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			n[i][j] = rand() % 90 + 10;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			std::cout << n[i][j] << " ";
		std::cout << std::endl;
	}
	return (0);
}