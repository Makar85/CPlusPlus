//Задание 2. Реализация ввода данных

#include <iostream>
#include <windows.h>

using namespace std;

bool Input(int& a, int& b) {
    int a1, b1;
    cout << "Введите два числа кроме 10:" << endl;
    cin >> a1 >> b1;
    if ((a1 == 10) || (b1 == 10))
        return false;
    a = a1;
    b = b1;
    return true;

}


int main()
{
    SetConsoleOutputCP(1251);
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}

