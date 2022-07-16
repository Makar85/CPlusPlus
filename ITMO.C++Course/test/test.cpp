
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;
//1.class A
class A {
private:
    int n;   
    int* arr;
public:
    A() {
        n = 0;
        arr = {};
    }
    A(int size) {
        n = size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
    A(const A& _arr) {
        n = _arr.n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = _arr.arr[i];
    }
    int size()const {
        int count = 0;
        for (int i = 0; i < n; i++) {
            count++;
        }
        return count;
    }
    ~A() {
        if (n > 0)
            delete[] arr;
    }
    A& operator=(const A& ar) {
        if (n > 0)
            delete[] arr;
        n = ar.n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = ar.arr[i];
        return *this;
    }
    const int& operator[] (const int& index)const {
        return arr[index];
    }
};
//3.Point
class Point {

    friend ostream& operator<< (ostream&, const Point&);
    friend Point& operator+(const Point&, const Point&);
    //friend Point& operator+=(const Point& point2);
    friend Point& operator+(const Point&, const int&);

private:
    int x, y;

public:

    Point() {}
    Point(int ix, int iy)
    {
        x = ix;
        y = iy;
    }
    Point& operator+=(const Point& newpoint) {
        x += newpoint.x;
        y += newpoint.y;
        return *this;
    }
  

};
ostream& operator<< (ostream& out, const Point& point)
{
    out << "(" << point.x << ", " << point.y << ")" << endl;
    return out;
}
Point& operator+(const Point& point1, const Point& point2) {
    Point sumPoints;
    sumPoints.x = point1.x + point2.x;
    sumPoints.y = point1.y + point2.y;
    return sumPoints;
}

Point& operator+(const Point& point1, const int& d) {
    Point sumPoints;
    sumPoints.x = point1.x + d;
    sumPoints.y = point1.y + d;
    return sumPoints;
}

//4.Напишите класс, который реализует функционал стека.
class Stack {
public:
    int arr[10];
    int size=0;
    
    void reset() {
        for (int i = 0; i < 10; i++) {
            arr[i] = 0;
        }
       
    }
    bool push(int value) {
        if (size == 10)
            return false;
        arr[size++] = value; 
        return true;
    }
   void pop() {
       if (size == 0) {
           cout << "В стеке отсутцтвуют значения" << endl;
           return;
       }
       arr[size - 1] = 0;
       size--;
    }
    void print() {
        cout << "( " << ends;
        for (int i = 0; i < size; i++)
            std::cout << arr[i] << " ";
        cout << ")" <<endl;
    }
};








int main()
{
    //Практические вопросы
    //1.
    /*A a1;
    A a2(10); //10 – размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }*/
    
    //3. 
    /*Point pt1(1,1) pt2(2,2), pt3; 
    pt3 = pt1 + pt2; 
    pt2 +=pt1; 
    pt3 = pt1 + 5;
    */
    
    //4 Stack
    
    Stack stack;
    stack.reset();
    stack.print();
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.pop();
    stack.print();
    return 0;


 }