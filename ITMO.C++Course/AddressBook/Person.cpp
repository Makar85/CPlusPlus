#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.h"

using namespace std;


	Person::Person(string last_name, string name, string second_name)
	{
		Person::last_name = last_name;
		Person::name = name;
		Person::second_name = second_name;
	}

	Person::~Person() {};

	void Person::show_data()
	{
		cout << "Фамилия: " << last_name << endl;
		cout << "Имя: " << name << endl;
		cout << "Отчество: " << second_name << endl;
	}
	void Person::getdata()
	{
		cout << "\n Введите фамилию: "; cin >> last_name;
		cout << "\n Введите имя: "; cin >> name;
		cout << "\n Введите отчество: "; cin >> second_name;
	}

	void Person::save() {};

	string Person::getLastName()
	{
		return last_name;
	}
		
	string Person::getName()
	{
		return name;
	}
	string Person::getSecondName()
	{
		return second_name;
	}
	
	
