//Задание 1. Структура Time

#include <iostream>
#include <windows.h>

using namespace std;

struct Time {
    int hours;
    int minutes = rand() % 60;
    int seconds = rand() % 60;
    // перевод времени в секунды
    int totalSec() {
        int ts = (hours * 3600) + (minutes * 60) + seconds;
        return ts;
    }
    //сложение фремени
    Time AddTime(Time t1, Time t2) {
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
    };
    //вычитание времени
    Time SubTime(Time t1, Time t2) {
        Time t;

        t.hours = t1.hours - t2.hours;
        t.minutes = t1.minutes - t2.minutes;
        t.seconds = t1.seconds - t2.seconds;
        if (t.minutes < 0)
        {
            t.hours--;
        }
        if (t.seconds < 0)
        {
            t.minutes--;
        }
        return t;
    };
    //демонстрация времени и общего колличества секунд
    void ShowTime()
    {
       cout << hours << "h : " << minutes << "min : " << seconds << "sec" << " Total seconds: " << totalSec() << "\n" << endl;
    }
};   
    
    //реалезация ввода времени
Time InputTime() {
    Time t;
    cout << "\n Введите часы: ";
    cin >> t.hours;
    cout << "\n Введите минуты: ";
    cin >> t.minutes;
    if (t.minutes > 60)
    {
        cerr << "\nНеверный ввод\n";
        exit(0);
    }
    else
    {
        cout << "\n Введите секунды: ";
        cin >> t.seconds;
        if (t.seconds > 60) 
        { 
            cerr << "\nНеверный ввод\n";
            exit(0);
        }
        else 
        { 
            return t; 
        }
    }      

};

    int main()
    {
        SetConsoleOutputCP(1251);
        Time t1 = InputTime();
        Time t2 = InputTime();
        Time t3 = t3.AddTime(t1, t2);
        Time t4 = t4.SubTime(t1, t2);

        t1.ShowTime();
        t2.ShowTime();
        t3.ShowTime();
        t4.ShowTime();
        return 0;
    }