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
	// Получение информации о студенте
	void Student:: show_data()
	{
		cout << role << endl;
		Person::show_data();
		cout << "Телефон: " << Tel->GetNumber() << endl;
		cout << "Категория: " << Tel->GetCategory() << endl;
		// Общее количество оценок
		unsigned int count_scores = this->scores.size();
		// Сумма всех оценок студента
		unsigned int sum_scores = 0;
		// Средний балл
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "Средняя оценка: " << average_score;
	}

	void Student::getdata()
	{
		string tel;
		string cat;
		unsigned int score;
		Person::getdata();
		cout << "\nВведите телефон: "; cin >> tel;
		cout << "\nВведите категорию (мобильный или городской): "; cin >> cat;
		Tel->SetNumber(tel);
		Tel->SetCategory(cat);
		for (int i = 1; i <= 5; i++)
		{
			cout << "\n Введите " << i << "ю оценку: "; cin >> score;
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

	// Деструктор Student
	Student::~Student()
	{
		Student::save();
	}
	//вызовы полей для записи в файл

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

	// Запись данных о студенте в файл
	void Student:: save()
	{
		ofstream fout("AddressBook.txt", ios::app);
		fout << Student::getRole() << endl;
		fout << "Фамилия: " << Student::getLastName() << endl;
		fout << "Имя: " << Student::getName() << endl;
		fout << "Отчество: " << Student::getSecondName() << endl;
		fout << "Телефон: " << Student::getPhone() << endl;
		fout << "Категория: " << Student::getCategory() << endl;
		fout << "Средняя оценка:  " << Student::getAvScore() << endl;
		cout << "данные сохранены\n";
		fout.close();
	}

