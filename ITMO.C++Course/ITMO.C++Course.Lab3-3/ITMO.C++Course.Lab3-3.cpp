//Задание 3. Работа с различными треугольниками

#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>

using namespace std;

double triangleArea(double num)
{
    double s;
    double a = num;
    s = (sqrt(3) / 4) * pow(a, 2);
    return s;
}

double triangleArea(double num1, double num2, double num3) {
    double a = num1;
    double b = num2;
    double c = num3;
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}


int main()
{
    SetConsoleOutputCP(1251);
    char num;
    cout << "\nвыберете тип треугольника: 1- равносторонний, 2 - разносторонний: "; cin >> num;
    
    switch (num)
    {
    case '1':
        double num;
        cout << "\nвведите сторону равностороннего треугольника: "; cin >> num;
        cout << "\n площадь треугольника равна: " << triangleArea(num);
        break;
    case '2':
        double num1, num2, num3;
        cout << "\nвведите размеры трех сторон разностороннего треугольника: "; cin >> num1>>num2>>num3;
        cout << "\n площадь треугольника равна: " << triangleArea(num1,num2,num3);
        break;
    default:
        cout << "\nвы ввели неверное значение!";            
    }
    return 0;
}

