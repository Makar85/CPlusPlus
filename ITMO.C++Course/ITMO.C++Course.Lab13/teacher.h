// teacher.h
#include "human.h"
#include <string>
#pragma once
using namespace std;

class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		string last_name,
		string name,
		string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	void show_data()
	{
		cout << role << endl;
		human::show_data();
		cout << "Колличество учебных часов: " << work_time << endl;
	}
	void getdata()
	{
		unsigned int score;
		human::getdata();
		cout << "\n Введите колличество учебных часов: "; cin >> work_time;
	}
private:
	// Учебные часы
	const string role = "\nУчитель\n";
	unsigned int work_time;
};
