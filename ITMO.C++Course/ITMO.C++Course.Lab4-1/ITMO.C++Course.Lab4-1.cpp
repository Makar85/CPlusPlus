//Задание 1. Вычисление корней квадратного уравнения

#include <iostream>
#include <windows.h>

using namespace std;


int Myroot(double a, double b, double c, double& x1, double& x2) {
	double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		return 1;
	}
	if (D == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		
	return 0;
	}
	if (D < 0) {

	return -1;
	}
	
	
}


int main()
{
	SetConsoleOutputCP(1251);

	double a, b, c, x1 = 0, x2 = 0;
	cout << "Введите через пробел коэффициенты квадратного уравнения (a, b, c):\n";
	cin >> a >> b >> c;
	switch (Myroot(a, b, c, x1, x2))
	{
	case(1):
		cout << "Функция возвратила: " << Myroot(a, b, c, x1, x2) << " это значит, что квадратное уравнение имеет два корня: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x1 = " << x2 << endl;
		break;
	case(0):
		cout << "Функция возвратила: " << Myroot(a, b, c, x1, x2) << " это значит, что квадратное уравнение имеет один корень: " << endl;
		cout << "x1 = x2 =  " << x1 << endl;
		break;
	case(-1):
		cout << "Функция возвратила: " << Myroot(a, b, c, x1, x2) << " это значит, что квадратное уравнение не имеет корней. " << endl;
		break;
	default:
		cout << "произошла ошибка в работе функции";
		break;

	}
}




