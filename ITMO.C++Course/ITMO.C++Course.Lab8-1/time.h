/* student.h */
#pragma once
using namespace std;
class Time
{
public:
    Time();
    Time(int, int, int);
    void SetTime(int, int, int);
    void ShowTime() const;
    Time AddTime(Time, Time)const;
    class NotNumberError {
    public:
        NotNumberError() : message("Неверный формат ввода.") { }
        void printMessage() const { cout << message << std::endl; }
    private:
        string message;
    };



private:
    int hours;
    int minutes;
    int seconds;


};
