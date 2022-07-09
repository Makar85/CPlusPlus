//Задание 2. Решение квадратного уравнения

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

struct Root
{
	double x1 = 0;
	double x2 = 0;
};

Root Roots(double a, double b, double c) 
{
	Root root;
	double D = b * b - 4 * a * c;
	if (D > 0) {
		root.x1 = ((-b) + sqrt(D)) / (2 * a);
		root.x2 = ((-b) - sqrt(D)) / (2 * a);
	}
	if (D == 0) {
		root.x1 = (-b) / (2 * a);
		root.x2 = root.x1;
	}
	return root;
}

int main()

{
	SetConsoleOutputCP(1251);
	double a, b, c;
	cout << "введите коэффициенты квадратного уравнения (a, b, c)" << endl;
	cin >> a >> b >> c;
	Root r = Roots(a, b, c);
	cout << "корень x1=" << r.x1 << endl;
	cout << "корень x2=" << r.x2 << endl;	
}


