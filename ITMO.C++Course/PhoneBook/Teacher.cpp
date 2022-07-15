#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Person.cpp"
#include "Telephone.cpp"

using namespace std;
class Teacher : public Person {
	// ����������� ������ teacher
public:
	Teacher(
		string last_name,
		string name,
		string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : Person(last_name, name, second_name
	) {
		this->work_time = work_time;
	}
	// ��������� ���������� � �������������
	void show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout << "�������: "; getTel();
		cout << "����������� ������� �����: " << work_time << endl;
	}

	void getdata()
	{
		unsigned int score;
		Person::getdata();
		cout << "\n ������� ����������� ������� �����: "; cin >> work_time;
	}

	void setTel(Telephone* t)
	{
		Tel = t;
	}
	Telephone getTel()
	{
		return *Tel;
	}

	// ���������� Teacher
	~Teacher()
	{
		save();
	}

	// ������ ������ � ������� � ����
	void save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		show_data();
	}


private:
	const string role = "\n�������\n";
	// ������� �������
	Telephone* Tel;
	// ������� ����
	unsigned int work_time;
};