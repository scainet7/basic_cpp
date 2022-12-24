/*
	Конструкция логического выбора if
	if - если;
	else - иначе;
	else if - иначе если;
*/

#include <iostream>

int main()
{
	bool hunger;
	
	// hunger = true;
	hunger = false;

	if (hunger)
		std::cout << "I went to eat!";
	else
		std::cout << "I will work (";
	return (0);
}