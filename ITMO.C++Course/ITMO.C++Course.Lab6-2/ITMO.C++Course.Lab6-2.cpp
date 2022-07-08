//Задание 2. Сохранение данных в текстовый файл

#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

void sortArrToFile(int* arr, int n) {
    int min = 0;
    int buf = 0;
    //запись исходного массива в файл
    ofstream initialArr("Arrays.txt");
    if (!initialArr) {
        cout << "Файл открыть невозможно\n";
        return;
    }
    initialArr << "Исходный массив:\n";
    for (int i = 0; i < n; i++) {
        initialArr << arr[i] << " ";
    }
    initialArr.close();
    
    for (int i = 0; i < n; i++)//Сортировка массива 
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (arr[j] < arr[min]) ? j : min;
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
    //запись отсортированного массива в файл
    ofstream sortedArr("Arrays.txt", ios::app);
    if (!sortedArr) {
        cout << "Файл открыть невозможно\n";
        return;
    }
    sortedArr << "\nОтсортированный массив:\n";
    for (int i = 0; i < n; i++) {
        sortedArr << arr[i] << " ";
    }
    sortedArr.close();
    cout << "Данные о массиах записаны в файл Arrays.txt" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int N = 10;
    int A[N] = { 15, 74, 2, 1, 8, 34, 83, 21, 19, 97 };
    cout << "Сортировка массива " << endl;
    sortArrToFile(A, N);
}

