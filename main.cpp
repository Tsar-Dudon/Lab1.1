#include <iostream>

int main()
{
	//setlocale(LC_ALL, "rus");
	//std::cout << "Переменная - поименованная либо адресуемая иным способом область памяти,\n адрес которой можно использовать для осуществления доступа к данным" << std::endl;
	//Типы данных
	//Целочисленные_____________________________________________________
	std::cout << "-char, 1 byte, -128...127" << std::endl;
	char a = -128;
	char b = 127;
	std::cout << "    -128 + 127 = " << a + b << std::endl;
	std::cout << "    -128 - 127 = " << a - b << std::endl;
	std::cout << "    -128 * 127 = " << a * b << std::endl;
	std::cout << "    -128 / 127 = " << a / b << std::endl << std::endl;
	

	std::cout << "-short, 2 bytes, -32768...32767" << std::endl;
	short a1 = -32768;
	short b1 = 32767;
	std::cout << "    -32768 + 32767 = " << a1 + b1 << std::endl;
	std::cout << "    -32768 - 32767 = " << a1 - b1 << std::endl;
	std::cout << "    -32768 * 32767 = " << a1 * b1 << std::endl;
	std::cout << "    -32768 / 32767 = " << a1 / b1 << std::endl << std::endl;


	std::cout << "-int, 4 bytes, 2**31...2**31-1" << std::endl;
	int a2 = -50000;
	int b2 = 50000;
	std::cout << "    -50000 + 50000 = " << a2 + b2 << std::endl << std::endl;


	std::cout << "-long long, 8 bytes, -2**63...2**63-1" << std::endl;
	long long a3 = -1000000000;
	long long b3 = 6437843672;
	std::cout << "    -1000000000 * 6437843672 = " << a3 * b3 << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	//Приставка unsigned перед типом данных берёт отрицательный диапазон чисел и добавляет его к положительному


	//Символьные
	std::cout << "-char, 1 byte, -128...127" << std::endl;
	char a4 = 127;
	char b4 = 35;
	std::cout << "    " << a4 << " - " << b4 << " = " << a4 - b4 << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;


	//Вещественные
	std::cout << "-float, 4 bytes, 6 or 7 numbers" << std::endl;
	float a5 = 0.32;
	float b5 = 2.44;
	std::cout << "    " << a5 << " * " << b5 << " = " << a5 * b5 << std::endl << std::endl;


	std::cout << "-double, 8 bytes, 15 or 16 numbers" << std::endl;
	double a6 = 3.12345678901234;
	double b6 = 82.09876543219876;
	std::cout << "    " << a6 << " * " << b6 << " = " << a6 * b6 << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;


	//Логический
	std::cout << "-bool, 1 byte, true or false" << std::endl;

	return 0;
}