// ITMO.C++Course.Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	system("chcp 1251");
	double S;
	double x1, y1;
	double x2, y2;
	double x3, y3; 
	double x4, y4;
	double x5, y5;

	cout << "\nВведите координаты вершин пятиугольника\n";
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
	S = 0.5 * fabs((x1 * y2) + (x2 * y3) + (x3 * y4) + (x4 * y5) + (x5 * y1) - (x2 * y1) - (x3 * y2) - (x4 * y3) - (x5 * y4) - (x1 * y5));
	cout << "Площадь пятиугольника S = " << S << endl; 
	return 0;	
}

