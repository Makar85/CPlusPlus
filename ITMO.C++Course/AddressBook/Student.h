#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>
#include "Telephone.h"
#include "Person.h"

using namespace std;


class Student : public Person {
public:
	// Конструктор класса Student
	Student(string, string , string, vector<int>, Telephone*);
	~Student();
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
	unsigned int getAvScore();

private:
	const string role = "\nСтудент\n";
	// Телефон студента
	Telephone* Tel;
	// Оценки студента
	vector<int> scores;
	float average_score;
};