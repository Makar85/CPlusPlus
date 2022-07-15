#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.cpp"
#include "Telephone.cpp"
#include <vector>

using namespace std;
class Student : public Person {
public:
	// ����������� ������ Student
	Student(
		string last_name,
		string name,
		string second_name,
		vector<int> scores) : Person(last_name, name, second_name) {
		this->scores = scores;
	}

	// ��������� ���������� � ��������
	void show_data()
	{
		cout << role;
		Person::show_data();
		cout << "�������: "; getTel();
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "������� ������:" << average_score;
	}

	void getdata()
	{
		unsigned int score;
		Person::getdata();

		for (int i = 1; i <= 5; i++)
		{
			cout << "\n ������� " << i << "� ������: "; cin >> score;
			scores.push_back(score);
		}
	}
	void setTel(Telephone* t)
	{
		Tel = t;
	}
	Telephone getTel()
	{
		return *Tel;
	}

	// ���������� Student
	~Student()
	{
		save();
	}

	// ������ ������ � �������� � ����
	void save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		show_data();
	}

private:
	const string role = "\n�������\n";
	// ������� ��������
	Telephone* Tel;
	// ������ ��������
	vector<int> scores;
};