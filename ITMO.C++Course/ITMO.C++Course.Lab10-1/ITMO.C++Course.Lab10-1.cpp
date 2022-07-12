//Задание 1. Реализация класса Triangle

#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>

#include "Dot.h"
using namespace std;

class Triangle {
public:
    Triangle(Dot* a, Dot* b) : a{ a }, b{ b } //композиция Dot часть класса triangle 
    {
        d = Dot();   
    }
    Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }{}//агрегация
   

    void Calcsize(Dot* a, Dot* b, Dot* c)
    {
        ab = a->distanceTo(*b);
        bc = b->distanceTo(*c);
        ac = a->distanceTo(*c);
        if (NotTriangle(ab, bc, ac))
            throw Triangle::NotTriangleError("Triangle.");
    }
    //расчет сторон треугольника:
    
    
  
    double get_ab() {
        return ab;
    }
    double get_bc() {
        return bc;
    }
    double get_ac() {
        return ac;
    }
    boolean NotTriangle(double ab, double bc, double ac) {
        if (ac >= ab + bc or ab >= bc + ac or bc >= ab + ac) return true;
        return false;
    }

    double TrianglePer() {
        return ab + bc + ac;
    }

    double TriangleArea() {
        double p = TrianglePer() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }
    class NotTriangleError {
    public:
        string nameObject;
        NotTriangleError(string triangle) :nameObject(triangle) {}
    };
private:
    Dot* a;
    Dot* b;
    Dot* c;
    Dot d;
    double ab;
    double bc;
    double ac;
};


int main()
{
    SetConsoleOutputCP(1251);
    cout << "Введите координаты вершин треугольника (всего 6 значений)\n";
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    Dot a(ax, ay);
    Dot b(bx, by);
    Dot c(cx, cy);
    try {
        Triangle triangleOrigin(&a, &b);//Вар1 композиция
        triangleOrigin.Calcsize(&a, &b, &c);
        cout << "сторона ab = " << triangleOrigin.get_ab() << "сторона bc = " << triangleOrigin.get_bc() << "сторона ac = " << triangleOrigin.get_ac() << endl;
        cout << "Периметр: " << triangleOrigin.TrianglePer() << endl;
        cout << "Площадь: " << triangleOrigin.TriangleArea() << endl;

        Triangle triangle(&a, &b, &c);//Вар2 агрегация
        triangle.Calcsize(&a, &b, &c);
        cout << "сторона ab = " << triangle.get_ab() << "сторона bc = " << triangle.get_bc() << "сторона ac = " << triangle.get_ac() << endl;
        cout << "Периметр: " << triangle.TrianglePer() << endl;
        cout << "Площадь: " << triangle.TriangleArea() << endl;
    }
    catch (Triangle::NotTriangleError& ex)
    {
        cout << "\nНе является треугольником " << ex.nameObject;
    }

}


