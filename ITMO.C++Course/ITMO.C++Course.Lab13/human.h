// human.h
#include <string>
#include <sstream>
#pragma once /* Защита от двойного подключения заголовочного файла */
using namespace std;

class human {
public:
	// Конструктор класса human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
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
