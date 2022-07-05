//Задание 1. Определение високосного года Дано натуральное число.
//Требуется определить, является ли год с данным номером високосным.Если год
//является високосным, то выведите YES, иначе выведите NO.

#include <iostream>

using namespace std;

int main()
{   
    system("chcp 1251");
    int year;
    cout << "Введите число год: "; cin >> year;
    if (year % 4 == 0) 
    { 
        if (year % 100 == 0) 
        { 
            if (year % 400 == 0) 
                cout << "YES" << endl; 
            else 
                cout << "NO" << endl;
        } 
        else 
            cout << year << "YES" << endl; 
    }
    else 
        cout << year << "NO" << endl;

    return 0;
}


