#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Telephone.h"

using namespace std;

class AdressBook {

private:
	// Оценкистудента
	vector<int> scores;
	// Добавление оценок студента в вектор
	Person* pubarr[100];
	int n = 0;
	char choice;
	string last_name;
	string name;
	string second_name;
	unsigned int work_time = 0;
public:
	void AddPerson();
};
