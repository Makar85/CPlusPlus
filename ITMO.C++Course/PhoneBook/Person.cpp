#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;

class Person {
public:
	// ����������� ������ Person
	Person(string ilast_name, string iname, string isecond_name)
	{
		last_name = ilast_name;
		name = iname;
		second_name = isecond_name;
	}

	virtual ~Person() = 0;

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