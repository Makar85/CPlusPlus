//Задание 1. Шаблонная функция обработки массива
/*Напишите шаблон функции, возвращающей среднее арифметическое всех элементов массива.
Аргументами функции должны быть имя и размер массива (типа int).
В функции main() проверьте работу с массивами типа int, long, double и char.*/

#include <iostream>

using namespace std;

template<class T>
double avg(T* arr, int n)
{
    int i = 0; 
    double avg_r = 0;
    while (i < n)
        avg_r += (double)arr[i++] / n;
    return avg_r;
}


int main()
{
    int M1[] = { 11,8,5,17,24,72,12,18,1,19};
    double M2[] = {1.2,15.7};
    long M3[] = {11,5};
    char M4[] = {"I'm char array"};
    int n1 = sizeof(M1) / sizeof(M1[0]);
    int n2 = sizeof(M2) / sizeof(double);
    int n3 = sizeof(M3) / sizeof(M1[0]);
    int n4 = sizeof(M4) / sizeof(M1[0]);

    cout << "avg int arr = " << avg<int>(M1,n1) << endl;
    cout << "avg double arr = " << avg<double>(M2,n2) << endl;
    cout << "avg long arr = " << avg<long>(M3,n3) << endl;
    cout << "avg char arr = " << avg<char>(M4,n4) << endl;

}


