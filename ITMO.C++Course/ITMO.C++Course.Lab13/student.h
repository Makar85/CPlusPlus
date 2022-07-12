// student.h
#pragma once
#include "human.h"
#include <string>
#include <vector>

using namespace std;
class student : public human {
public:
	// ����������� ������ Student
	student(string last_name, string name, string second_name,
		vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	// ��������� �������� ����� ��������
	void show_data()
	{
		
		cout << role;
		human::show_data();
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
		human::getdata();
		for (int i = 1; i <= 5; i++)
		{
			cout << "\n ������� "<< i <<"� ������: "; cin >> score;
					scores.push_back(score);
		}
	}

private:
	// ������ ��������
	const string role ="\n�������\n";
	vector<int> scores;
};
