//Задание 1. Запись текста в файл

#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int max = 500;
    char str[max];
    cout << "Введите текст небольшого стихотворения, для завершения нажмите 'end'.\n" << endl;
    cin.get(str, max, 'end');
    ofstream sometext("sometext");
    if (!sometext) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    sometext << str;
    cout << "Данные записаны в файл sometext.txt." << endl;
}

