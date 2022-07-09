/* time.cpp */

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include "time.h"

using namespace std;

Time::Time()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
}
Time::Time(int in_hours, int in_minutes, int in_seconds)
{
	Time::SetTime(in_hours, in_minutes, in_seconds);
}
void Time::SetTime(int in_hours, int in_minutes, int in_seconds)
{
	    hours = in_hours;

	if (in_minutes >= 60)
	{
		minutes = in_minutes - 60;
		hours++;
	}
	else
	{
		minutes = in_minutes;
	}
	if (in_seconds >= 60)
	{
		minutes = in_seconds - 60;
		minutes++;
	}
	else
	{
		seconds = in_seconds;
	}
}
void Time:: ShowTime() const
{
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

Time Time::AddTime(Time t1, Time t2) const  
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	t.seconds = t1.seconds + t2.seconds;
	if (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	if (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	return t;

	class NotNumberError {
	public:
		NotNumberError() : message("Неверный формат ввода.") { }
		void printMessage() const { cout << message << std::endl; }
	private:
		string message;
	};

}