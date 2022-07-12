// student.h
#pragma once
#include "human.h"
#include <string>
#include <vector>

using namespace std;
class student : public human {
public:
	// Конструктор класса Student
	student(string last_name, string name, string second_name,
		vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	// Получение среднего балла студента
	void show_data()
	{
		
		cout << role;
		human::show_data();
		// Общее количество оценок
		unsigned int count_scores = this->scores.size();
		// Сумма всех оценок студента
		unsigned int sum_scores = 0;
		// Средний балл
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "Средняя оценка:" << average_score;
	}
	void getdata() 
	{
		unsigned int score;
		human::getdata();
		for (int i = 1; i <= 5; i++)
		{
			cout << "\n Введите "<< i <<"ю оценку: "; cin >> score;
					scores.push_back(score);
		}
	}

private:
	// Оценки студента
	const string role ="\nСтудент\n";
	vector<int> scores;
};
