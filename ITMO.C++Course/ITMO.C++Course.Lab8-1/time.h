/* student.h */
#pragma once
using namespace std;
class Time
{
    //Практика11. Задание 1. Перегрузка операторов в классе Time
    friend Time operator+(const Time&, const Time&);
    friend Time operator+(const Time&, const double);
    friend Time operator+(const double, const Time&);
    friend Time operator-(const Time&, const Time&);
    friend Time operator>(const Time&, const Time&);
public:
    Time();
    Time(int, int, int);
    void SetTime(int, int, int);
    void ShowTime() const;
    Time AddTime(Time, Time)const;
    class NotNumberError {
    public:
        NotNumberError() : message("Неверный формат ввода.") { }
        void printMessage() const { cout << message << endl; }
    private:
        string message;
    };



private:
    int hours;
    int minutes;
    int seconds;


};
