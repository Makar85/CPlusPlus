/* main.cpp */

#include <iostream>
#include <windows.h>
#include "time.h"
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	Time const t1 = Time(11, 32, 15);
	Time const t2 = Time(7, 45, 54);
	Time t3 = t3.AddTime(t1, t2);
	Time t4 = t1 + t2;
	Time t5 = t1 - t2;
	cout << "Результат сложения времени через функцию: ";
	t3.ShowTime();
	cout << "Результат сложения времени через перегрузку оператора: ";
	t4.ShowTime();
	cout << "Результат вычитания времени через перегрузку оператора: ";
	t5.ShowTime();
	double doubleTime = 1.7;
    Time t6 = t1 + doubleTime;
	cout << "Результат сложения времени и переменной вещественного типа: ";
	t6.ShowTime();
	Time t7 = doubleTime + t1;
	cout << "Результат сложения переменной вещественного типа времени: ";
	t7.ShowTime();
	t2 > t1;

	//Задание 2. Безопасная реализация класса Time
	try {
		cout << "Введите время: часы, минуты, секунды: " << endl;
		int h, m, s;
		if (!(cin >> h >> m >> s))
			throw Time::NotNumberError();
		
		Time const t4 = Time(h, m, s);
		t4.ShowTime();
	}
	catch (Time::NotNumberError& ex)
	{
		ex.printMessage();
	}
}

