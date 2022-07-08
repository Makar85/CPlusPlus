//Задание 1. Передача массива в функцию

#include <iostream>
#include <windows.h>

using namespace std;
//сумма элементов в массиве
int sumAr(int* array, int n) { 
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}
//среднее значение массива
double avgAr(int* array, int n) { 
    int s = sumAr(array, n);
    return  (double)s / n;
}

//расчет суммы отрицательных элементов
int sumNegAr(int* array, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
            sum += array[i];
    }
    return sum;
}
//расчет суммы положительных элементов
int sumPosAr(int* array, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0)
            sum += array[i];
    }
    return sum;
}
//расчет суммы элементов с нечетными индексами
int sumOddElIndexInAr(int* array, int n) {
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += array[i];
    }
    return sum;
}
//расчет суммы элементов с четными индексами
int sumEvenElIndexInAR(int* array, int n) {
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += array[i];
    }
    return sum;
}
//найти максимальный элемент массива и вывести его индекс
int indMaxEl(int* array, int n) {
    int max = array[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }
    return index;
}
//найти минимальный элемент массива и вывести его индекс
int indMinEl(int* array, int n) {
    int min = array[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min) {
            min = array[i];
            index = i;
        }
    }
    return index;
}


//рассчет произведения элементов массива, расположенных между максимальным и минимальным элементами
void multElAr(int* array, int n) {
    int m = 1;
    int indexMax = indMaxEl(array, n);
    int indexMin = indMinEl(array, n);
    
    if (indexMin < indexMax) {
        for (int i = indexMin; i <= indexMax; i++)
        {
            m *= array[i];
        }
        cout << "Произведение элементов между минимальным и максимальным элементами: " << m << endl;
    }
    else if (indexMin > indexMax) {
        for (int i = indexMax; i <= indexMin; i++)
        {
            m *= array[i];
        }
        cout << "Произведение элементов между минимальным и максимальным элементами: " << m << endl;
    }
    else
        cout << "Максимальный и минимальный элементы совпадают" << endl;
}


int main()
{
    SetConsoleOutputCP(1251);
    const int n = 10;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "]=";
        cin >> array[i];
    }
    cout << "сумма элементов в массиве: " << sumAr(array, n) << endl;
    cout << "среднее значение массива: " << avgAr(array, n) << endl;
    cout << "расчет суммы отрицательных элементов: " << sumNegAr(array, n) << endl;
    cout << "расчет суммы положительных элементов: " << sumPosAr(array, n) << endl;
    cout << "расчет суммы элементов с нечетными индексами: " << sumOddElIndexInAr(array, n) << endl;
    cout << "расчет суммы элементов с четными индексами: " << sumEvenElIndexInAR(array, n) << endl;
    cout << "индекс максимального элемента массива: " << indMaxEl(array, n) << endl;
    cout << "индекс минимального элемента массива: " << indMinEl(array, n) << endl;
    multElAr(array, n);
}