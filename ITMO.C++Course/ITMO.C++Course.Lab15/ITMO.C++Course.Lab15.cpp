//Задание 1. Организация хранения данных в контейнере

#include <iostream>
#include <string>
#include <map>
#include <windows.h>
using namespace std;

struct StudentGrade
{
    string name; //имя студента
    char rate; //оценка студента
    
   
};

map<string, char>  students;



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    StudentGrade student;
    char choice;
    map<string, char>  students;
    map<string, char>::iterator it = students.begin();
    cout << "Что делать? \nа - добавить студента\ns - показать студентов и их оценки\nf - найти студента по имени\ne - выход: \n";
    cin >> choice;
    switch (choice)
    {
     do {
        case 'a':
        {
            do {
                cout << "Введите имя: ";
                cin >> student.name;
                cout << "Введите оценку: ";
                cin >> student.rate;
                students.insert(make_pair(student.name, student.rate));
                cout << "Продолжить((у / n) ? ";
                cin >> choice;
            } while (choice == 'y');
        }          
        case 's':
        {
            for (auto const& studData : students)
            {
                cout << studData.first << ":" << studData.second << endl;
            }
        }           
        case 'f':
        {
            cout << "Для поиска введите имя студента: ";
            cin >> student.name;
            it = students.find(student.name);

            if (it == students.end())
            {
                cout << "Студента с именем " << student.name << " не существует." << endl;
            }
            else
            {
                cout << it->first << ":" << it->second << endl;
            }
            break;               
        }
        case 'e':
        {
            exit(0);
            break;
        }
        default:
        {
            cerr << "error" << endl;
            break;
        }
     } while (choice != 'e');
    }  
   return 0;
}

