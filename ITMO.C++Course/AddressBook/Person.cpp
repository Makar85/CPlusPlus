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
		cout << "�������: " << last_name << endl;
		cout << "���: " << name << endl;
		cout << "��������: " << second_name << endl;
	}
	void Person::getdata()
	{
		cout << "\n ������� �������: "; cin >> last_name;
		cout << "\n ������� ���: "; cin >> name;
		cout << "\n ������� ��������: "; cin >> second_name;
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
	
	
