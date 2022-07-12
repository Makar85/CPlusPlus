//Задание 1. Полиморфизм в системе классов учебного центра
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include <windows.h>
#include "teacher.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Оценкистудента
		vector<int> scores;
	// Добавление оценок студента в вектор
		human* pubarr[100];
		int n = 0;
		char choice;
		string last_name;
		string name;
		string second_name;
		unsigned int work_time=0;
		
		do {
			cout << "\nВводить данные для студента или учителя(s/ t) ? ";
			cin >> choice;
			if (choice == 's')
			{
				pubarr[n] = new student(last_name, name, second_name, scores);				
			}
			else
			{
				pubarr[n] = new teacher(last_name, name, second_name, work_time);				
			}
			pubarr[n]->getdata();
			n++;
		    cout << "Продолжить((у / n) ? ";
		    cin >> choice;
	} while (choice == 'y');
		

	for (int j = 0; j < n; j++) //цикл по всем объектам
		pubarr[j]->show_data(); //вывести данные о публикации
	cout << endl;
	return 1;
}


