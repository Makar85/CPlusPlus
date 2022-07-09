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
	t3.ShowTime();

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

