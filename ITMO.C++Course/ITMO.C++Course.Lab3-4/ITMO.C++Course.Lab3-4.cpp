// Задание 4. Рекурсивная функция суммы ряда

#include <iostream>
#include <windows.h>

using namespace std;

int sumRow(int n) {
	if (n == 1) return 5;
	else return(n * 5 + sumRow(n - 1));
}

int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "\nВведите число: "; cin >> n;
		
	cout << "сумма ряда s = 5 + 10 + 15 + … + 5·n равна " << sumRow(n) << endl;
}


