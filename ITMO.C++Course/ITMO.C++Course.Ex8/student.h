/* student.h */
#pragma once /* Защита от двойного подключения заголовочного файла */
#include <windows.h>
#include <string>
#include "IdCard.h"
using namespace std;

class Student
{
public:
	
	class ExScore //класс исключений
	{
	public:
		string origin; //для имени функции
		int iValue; //для хранения ошибочного значения
		ExScore(string ori, int sc)
		{
			origin = ori; //строка с именем виновника ошибки
			iValue = sc; //сохраненное неправильное значение
		}
	};
	// Конструктор класса Student
	Student(string, string, IdCard*);
	// Деструктор класса Student
	~Student();
	// Установка имени студента
	void set_name(string);
	// Получение имени студента
	string get_name();
	// Установка фамилии студента
	void set_last_name(string);
	// Получение фамилии студента
	string get_last_name();
	// Установка промежуточных оценок
	void set_scores(int[]);
	// Установка среднего балла
	void set_average_score(double);
	// Получение среднего балла
	double get_average_score();
	// Запись данных о студенте в файл
	void save();

	void setIdCard(IdCard* c);

	IdCard getIdCard();
private:

	IdCard* iCard;
	// Промежуточные оценки
	int scores[5];
	// Средний балл
	double average_score;
	// Имя
	string name;
	// Фамилия
	string last_name;
};
