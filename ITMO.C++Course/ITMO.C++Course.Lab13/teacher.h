// teacher.h
#include "human.h"
#include <string>
#pragma once
using namespace std;

class teacher : public human {
	// ����������� ������ teacher
public:
	teacher(
		string last_name,
		string name,
		string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	void show_data()
	{
		cout << role << endl;
		human::show_data();
		cout << "����������� ������� �����: " << work_time << endl;
	}
	void getdata()
	{
		unsigned int score;
		human::getdata();
		cout << "\n ������� ����������� ������� �����: "; cin >> work_time;
	}
private:
	// ������� ����
	const string role = "\n�������\n";
	unsigned int work_time;
};
