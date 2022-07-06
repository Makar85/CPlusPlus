//Задание 2. Применение итерации реализации функции

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;


double cRoot(double a) {
	return pow(a, 1.0 / 3);
}

double cRootIter(double a) {
	double a1=a;
	double x = 0;
	while (abs(x - a1) > 0.001) {
		x = a1;
		a1 = (a / (x * x) + 2 * x)/3;
	} 
	return a1;
}


int main()
{
	SetConsoleOutputCP(1251);
	double a;
	cout << "Введите число для которого необходимо посчитать кубический корень: "; cin >> a;
	cout << "\nКубический корень по стандартной формуле: " << cRoot(a) << endl;
	cout <<"\nКубический корень по итерационной формуле: " << cRootIter(a) << endl;
	return 0;
}


