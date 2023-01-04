#include <iostream>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char *str;

	str = "LOL World!";
	std::cout << ft_strlen(str) << std::endl;
	return (0);
}