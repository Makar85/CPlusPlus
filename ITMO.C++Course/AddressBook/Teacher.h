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
	// ����������� ������ teacher
	Teacher(string, string, string, unsigned int, Telephone*);
	~Teacher();
	// ��������� ���������� � �������������
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
	const string role = "\n�������\n";
	// ������� �������
	Telephone* Tel;
	// ������� ����
	unsigned int work_time;
};