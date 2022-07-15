#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Telephone.h"
#include "Person.h"

using namespace std;

class Teacher : public Person 
{	
public:
	// Конструктор класса teacher
	Teacher(string, string, string, unsigned int, Telephone*);
	~Teacher();
	// Получение информации о преподавателе
	void show_data();
	void getdata();
	void setTel(Telephone*);
	void getTel();
	void save();
	string getRole();
	string getLastName();
	string getName();
	string getSecongName();
	string getPhone();
	string getCategory();
	unsigned int getWorkTime();
	
private:
	const string role = "\nУчитель\n";
	// Телефон учителя
	Telephone* Tel;
	// Учебные часы
	unsigned int work_time;
};