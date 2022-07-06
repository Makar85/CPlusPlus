// Задание 5. Применение рекурсии для перевода целого числа в двоичный код


#include <iostream>
#include <windows.h>
using namespace std;

void converterFrom10to2(int num)
{
	if (num <= 2) {
		cout << num;
		return;
	}
	else {
		converterFrom10to2(num / 2);
		cout << num % 2;
		return;
	}
}


int main()
{
    SetConsoleOutputCP(1251);
	int num;
	cout << "\nВведите число кторое необходимо перевестив двоичный формат:\n"; cin >> num;
	cout << "\nВведенное число в двоичном формате: " <<endl;
	converterFrom10to2(num);
}

