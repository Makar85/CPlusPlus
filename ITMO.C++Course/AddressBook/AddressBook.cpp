#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Telephone.h"
#include "AddressBook.h"

using namespace std;


void AdressBook::AddPerson()
{
		
	do {
		cout << "\n������� ������ ��� �������� ��� �������(s/ t) ? ";
		cin >> choice;
		if (choice == 's')
		{
			Telephone telephone;
			pubarr[n] = new Student(last_name, name, second_name, scores, &telephone);
		}
		else
		{
			Telephone telephone;
			pubarr[n] = new Teacher(last_name, name, second_name, work_time, &telephone);
		}
		pubarr[n]->getdata();
		n++;
		cout << "����������((� / n) ? ";
		cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++) //���� �� ���� ��������
	{
		pubarr[j]->show_data(); //������� ������ � ����������
		pubarr[j]->save();
	}
	cout << endl;
}



