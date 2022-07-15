#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;

class Person {
public:
	// Конструктор класса Person
	Person(string ilast_name, string iname, string isecond_name)
	{
		last_name = ilast_name;
		name = iname;
		second_name = isecond_name;
	}

	virtual ~Person() = 0;

	// Получение ФИО человека
	virtual void show_data()
	{
		cout << "Фамилия: " << last_name << endl;
		cout << "Имя: " << name << endl;
		cout << "Отчество: " << second_name << endl;
	}
	virtual void getdata()
	{
		cout << "\n Введите фамилию: "; cin >> last_name;
		cout << "\n Введите имя: "; cin >> name;
		cout << "\n Введите отчество: "; cin >> second_name;
	}

private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество

};