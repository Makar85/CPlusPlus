//Задание 1. Расчет площади сложной фигуры

#include <iostream>
#include<cmath>

using namespace std;

//расчет длин сторон треугольника
double sideLength(double xBegin, double yBegin, double xEnd, double yEnd) {
    double xDist = xBegin - xEnd;
    double yDist = yBegin - yEnd;
    double distance = sqrt(xDist * xDist + yDist * yDist);
    return distance;
}

// расчет площади треугольника
double triangleArea(double s1, double s2, double s3)
{
    double p = (s1 + s2 + s3) / 2;
    double area = sqrt(p * (p - s1) * (p - s2) * (p - s3));
    return area;
}

// основная функция 
double pentagonArea() {
    system("chcp 1251");
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
    double x5, y5;
    cout << "\nВведите координаты пятиугольника, пять точек у каждой значение x и y итого 10 значений\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;

    double AB = sideLength(x1, y1, x2, y2);
    double AC = sideLength(x1, y1, x3, y3);
    double AD = sideLength(x1, y1, x4, y4);
    double AE = sideLength(x1, y1, x5, y5);
    double BC = sideLength(x2, y2, x3, y3);
    double CD = sideLength(x3, y3, x4, y4);
    double DE = sideLength(x4, y4, x5, y5);


    double ABC = triangleArea(AB, BC, AC);
    double ACD = triangleArea(AC, CD, AD);
    double ADE = triangleArea(AD, DE, AE);

    double sumArea = ABC + ACD + ADE;
    return sumArea;
}






int main()
{
    cout << pentagonArea();
    return 0;
}




