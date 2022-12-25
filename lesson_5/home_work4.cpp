#include <iostream>

int main()
{
	int n, i;
	char c;
	char str;

	i = 0;
	std::cout << "Enter the number of characters\n";
	std::cin >> n;
	std::cout << "Enter character\n";
	std::cin >> c;
	std::cout << "Enter the word 'v' - vertical or 'h'  - horizontalto make a line\n";
	std::cout << "or 'e' - end programm\n";
	std::cin >> str;
	switch (str)
	{
		case 'v':
		{
			while (i < n)
			{
				std::cout << c << std::endl;
				i++;
			}
			break;
		}
		case 'h':
		{
			while (i < n)
			{
				std::cout << c;
				i++;
			}
			std::cout << std::endl;
			break;
		}
		case 'e':
		{
			return (0);
		}
		default:
			std::cout << "Erro - incorrect word entered!" << std::endl;
	}
	return (0);
}