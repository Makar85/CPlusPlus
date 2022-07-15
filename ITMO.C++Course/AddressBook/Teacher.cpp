#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.h"
#include "Telephone.h"
#include "Teacher.h"

using namespace std;

	Teacher::Teacher(
		string last_name,
		string name,
		string second_name,
		unsigned int work_time, 
		Telephone* tel) : Person (last_name, name, second_name)
	{
		Teacher::setTel(tel);
		Teacher::work_time = work_time;
	}
	
	// Получение информации о преподавателе
	void Teacher:: show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout <<"Телефон: " << Tel->GetNumber()<<endl;
		cout << "Категория: " << Tel->GetCategory()<<endl;
		cout << "Колличество учебных часов: " << work_time << endl;
	}

	void Teacher:: getdata()
	{
		
		string tel;
		string cat;
		unsigned int score;
		Person::getdata();
		cout << "\nВведите телефон: "; cin >> tel;
		cout << "\nВведите категорию (мобильный или городской): "; cin >> cat;
		Tel->SetNumber(tel);
		Tel->SetCategory(cat);
		cout << "\nВведите колличество учебных часов: "; cin >> work_time;
	}

	void Teacher::setTel(Telephone* tel)
	{
		Tel=tel;
	}
	void Teacher::getTel()
	{
		cout << Tel->GetNumber();
		cout << Tel->GetCategory();
	}

	// Деструктор Teacher
	Teacher::~Teacher()
	{
		Teacher::save();
	}
	//вызовы полей для записи в файл

	string Teacher::getRole()
	{
		return role;
	}

	string Teacher::getLastName()
	{
		return Teacher::Person::getLastName();
	}
	string Teacher::getName()
	{
		return Teacher::Person::getName();
	}
	string Teacher::getSecongName()
	{
		return Teacher::Person::getSecondName();
	}
	string Teacher::getPhone()
	{
			return Tel->GetNumber();
	}
	string Teacher::getCategory()
	{
		return Tel->GetCategory();
	}
	unsigned int Teacher:: getWorkTime()
	{
		return work_time;
	}

	// Запись данных о учителе в файл
	void Teacher::save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		fout << Teacher::getRole() << endl;
		fout << "Фамилия: " << Teacher::getLastName() << endl;
		fout << "Имя: " << Teacher::getName() << endl;
		fout << "Отчество: " << Teacher::getSecondName() << endl;
		fout << "Телефон: " << Teacher::getPhone() << endl;
		fout << "Категория: " << Teacher::getCategory() << endl;
		fout << "Колличество учебных часов: " << Teacher::getWorkTime() << endl;
		cout << "данные сохранены\n";
		fout.close();
	}


