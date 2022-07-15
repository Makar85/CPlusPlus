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
	
	// ��������� ���������� � �������������
	void Teacher:: show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout <<"�������: " << Tel->GetNumber()<<endl;
		cout << "���������: " << Tel->GetCategory()<<endl;
		cout << "����������� ������� �����: " << work_time << endl;
	}

	void Teacher:: getdata()
	{
		
		string tel;
		string cat;
		unsigned int score;
		Person::getdata();
		cout << "\n������� �������: "; cin >> tel;
		cout << "\n������� ��������� (��������� ��� ���������): "; cin >> cat;
		Tel->SetNumber(tel);
		Tel->SetCategory(cat);
		cout << "\n������� ����������� ������� �����: "; cin >> work_time;
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

	// ���������� Teacher
	Teacher::~Teacher()
	{
		Teacher::save();
	}
	//������ ����� ��� ������ � ����

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

	// ������ ������ � ������� � ����
	void Teacher::save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		fout << Teacher::getRole() << endl;
		fout << "�������: " << Teacher::getLastName() << endl;
		fout << "���: " << Teacher::getName() << endl;
		fout << "��������: " << Teacher::getSecondName() << endl;
		fout << "�������: " << Teacher::getPhone() << endl;
		fout << "���������: " << Teacher::getCategory() << endl;
		fout << "����������� ������� �����: " << Teacher::getWorkTime() << endl;
		cout << "������ ���������\n";
		fout.close();
	}


