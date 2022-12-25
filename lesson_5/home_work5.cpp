#include <iostream>

int main()
{
	int i, n, res;

	res = 0;
	std::cout << "Enter the beginning of the range\n";
	std::cin >> i;
	std::cout << "Enter the ending of the range\n";
	std::cin >> n;
	if (n - i < 0)
	{
		std::cout << "Error range\n";
		return (0);
	}
	do
	{
		if (i % 2 != 0)
			res += i;
		i++;
	} while (i <= n);
	std::cout << res << std::endl;
	return (0);
}