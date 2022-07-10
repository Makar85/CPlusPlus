/* student.h */
#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <windows.h>
#include <string>
#include "IdCard.h"
using namespace std;

class Student
{
public:
	
	class ExScore //����� ����������
	{
	public:
		string origin; //��� ����� �������
		int iValue; //��� �������� ���������� ��������
		ExScore(string ori, int sc)
		{
			origin = ori; //������ � ������ ��������� ������
			iValue = sc; //����������� ������������ ��������
		}
	};
	// ����������� ������ Student
	Student(string, string, IdCard*);
	// ���������� ������ Student
	~Student();
	// ��������� ����� ��������
	void set_name(string);
	// ��������� ����� ��������
	string get_name();
	// ��������� ������� ��������
	void set_last_name(string);
	// ��������� ������� ��������
	string get_last_name();
	// ��������� ������������� ������
	void set_scores(int[]);
	// ��������� �������� �����
	void set_average_score(double);
	// ��������� �������� �����
	double get_average_score();
	// ������ ������ � �������� � ����
	void save();

	void setIdCard(IdCard* c);

	IdCard getIdCard();
private:

	IdCard* iCard;
	// ������������� ������
	int scores[5];
	// ������� ����
	double average_score;
	// ���
	string name;
	// �������
	string last_name;
};
