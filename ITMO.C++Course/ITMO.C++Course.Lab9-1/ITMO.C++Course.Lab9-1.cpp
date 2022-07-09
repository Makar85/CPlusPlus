//Задание 1. Безопасная реализация класса Triangle

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
class Triangle
{
   public:
      Triangle(double ina, double inb, double inc)
      {
           a = ina;
           b = inb;
           c = inc;
           if (c >= a + b or a >= b + c or b >= a + c)
               throw Triangle::NotTriangleError("NotTriangleError");
       }
       

      double TriangleArea() const
      {
          double p = (a + b + c) / 2;
          double s = sqrt(p*(p-a)*(p-b)*(p-c));
          return s;
      }
      class NotTriangleError {
      public:
          string nameObject;
          NotTriangleError(string triangle) :nameObject(triangle) {}
      };


  private:
      double a, b, c;
};

int main()
{
    SetConsoleOutputCP(1251);
    cout << "Введите через пробел стороны треугольника\n";
    double a, b, c;
    cin >> a >> b >> c;
    try {
        Triangle triangle(a, b, c);
        cout << "Площадь треугольника равна: " << triangle.TriangleArea() << endl;
    }
    catch (Triangle::NotTriangleError& ex)
    {
        cerr << "\n Такого треугольника не существует " << ex.nameObject;
    }
}

