#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.cpp"
#include "Telephone.cpp"

using namespace std;
class Teacher : public Person {
	// Конструктор класса teacher
public:
	Teacher(
		string last_name,
		string name,
		string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : Person(last_name, name, second_name
	) {
		this->work_time = work_time;
	}
	// Получение информации о преподавателе
	void show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout << "Телефон: "; getTel();
		cout << "Колличество учебных часов: " << work_time << endl;
	}

	void getdata()
	{
		unsigned int score;
		Person::getdata();
		cout << "\n Введите колличество учебных часов: "; cin >> work_time;
	}

	void setTel(Telephone* t)
	{
		Tel = t;
	}
	Telephone getTel()
	{
		return *Tel;
	}

	// Деструктор Teacher
	~Teacher()
	{
		save();
	}

	// Запись данных о учителе в файл
	void save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		show_data();
	}


private:
	const string role = "\nУчитель\n";
	// Телефон учителя
	Telephone* Tel;
	// Учебные часы
	unsigned int work_time;
};