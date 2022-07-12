// human.h
#include <string>
#include <sstream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
using namespace std;

class human {
public:
	// ����������� ������ human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	virtual void show_data()
	{
		cout << "�������: " << last_name << endl;
		cout << "���: " << name << endl;
		cout << "��������: " << second_name << endl;
	}
	virtual void getdata()
	{
		cout << "\n ������� �������: "; cin >> last_name;
		cout << "\n ������� ���: "; cin >> name;
		cout << "\n ������� ��������: "; cin >> second_name;
	}
	
private:
	string name; // ���
	string last_name; // �������
	string second_name; // ��������
};
