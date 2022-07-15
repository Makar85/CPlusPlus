#pragma once
#include <string>
using namespace std;

class Person {
public:
	
	Person(string last_name, string name, string second_name);
	virtual ~Person() = 0;
	// Получение ФИО человека
	virtual void show_data();
	virtual void getdata();
	virtual void save();
	string getName();
	string getLastName();
	string getSecondName();
	
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество

};