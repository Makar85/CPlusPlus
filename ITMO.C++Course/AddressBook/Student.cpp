#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.h"
#include "Telephone.h"
#include "Student.h"
#include <vector>

using namespace std;

	Student::Student(
		string last_name,
		string name,
		string second_name,
		vector<int> scores,
		Telephone* tel) : Person(last_name, name, second_name) 
	{
		Student::setTel(tel);
		Student::scores = scores;
	}
	// ��������� ���������� � ��������
	void Student:: show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout << "�������: " << Tel->GetNumber() << endl;
		cout << "���������: " << Tel->GetCategory() << endl;
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "������� ������: " << average_score;
	}

	void Student::getdata()
	{
		string tel;
		string cat;
		unsigned int score;
		Person::getdata();
		cout << "\n������� �������: "; cin >> tel;
		cout << "\n������� ��������� (��������� ��� ���������): "; cin >> cat;
		Tel->SetNumber(tel);
		Tel->SetCategory(cat);
		for (int i = 1; i <= 5; i++)
		{
			cout << "\n ������� " << i << "� ������: "; cin >> score;
			scores.push_back(score);
		}

	}
	void Student:: setTel(Telephone* tel)
	{
		Tel = tel;
	}
	void Student::getTel()
	{
		cout << Tel->GetNumber();
		cout << Tel->GetCategory();
	}

	// ���������� Student
	Student::~Student()
	{
		Student::save();
	}
	//������ ����� ��� ������ � ����

	string Student::getRole()
	{
		return role;
	}

	string Student::getLastName()
	{
		return Student::Person::getLastName();
	}
	string Student::getName()
	{
		return Student::Person::getName();
	}
	string Student::getSecongName()
	{
		return Student::Person::getSecondName();
	}
	string Student::getPhone()
	{
		return Tel->GetNumber();
	}
	string Student::getCategory()
	{
		return Tel->GetCategory();
	}
	unsigned int Student::getAvScore()
	{
		return average_score;
	}

	// ������ ������ � �������� � ����
	void Student:: save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		fout << Student::getRole() << endl;
		fout << "�������: " << Student::getLastName() << endl;
		fout << "���: " << Student::getName() << endl;
		fout << "��������: " << Student::getSecondName() << endl;
		fout << "�������: " << Student::getPhone() << endl;
		fout << "���������: " << Student::getCategory() << endl;
		fout << "������� ������:  " << Student::getAvScore() << endl;
		cout << "������ ���������\n";
		fout.close();
	}

