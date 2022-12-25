#include <iostream>

int main()
{
	std::cout << "LOL!\n";
	std::cout << "Ufffff ((!\n";
	goto puuuf; // Опратор при котором можно пропусть чать кода в зависимости где будет стоять ссылка;
	std::cout << "LOL!LOL!LOL!LOL!\n";
	std::cout << "\n";
	puuuf: // ссылка от опреатора goto,все что до - пропускается, все что после выполняется.
	std::cout << "LOL!\n";
	std::cout << "Ufffff ((!\n";
	return (0);
}