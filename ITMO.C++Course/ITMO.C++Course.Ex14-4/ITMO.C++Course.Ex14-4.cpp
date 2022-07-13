
#include <iostream>
#include <tuple>
#include <vector>
#include <windows.h>

using namespace std;


template<class T, class T1> class array
{
public:
    template<class T, class T1> array<T, T1>::array(int size)
    {
        data = new T[size];
        if (data == NULL)
        {
            cerr << "Error memory ---- exit program" << endl;
            exit(1);
        }
        array::size = size;
        array::index = 0;
    }
    template<class T, class T1> T1 array<T, T1>::sum()
    {
        T1 sum = 0;
        for (int i = 0; i < index; i++) sum += data[i];
        return(sum);
    }
    template<class T, class T1> T array<T, T1>::average_value()
    {
        T1 sum = 0;
        for (int i = 0; i < index; i++) sum += data[i];
        return (sum / index);
    }
    template<class T, class T1> void array<T, T1>::show_array()
    {
        for (int i = 0; i < index; i++) cout << data[i] << ' ';
        cout << endl;
    }
    template<class T, class T1> int array<T, T1>::add_value(T value)
    {
        if (index == size)
            return(-1);
        else
        {
            data[index] = value;
            index++;
            return(0);
        }
    }
private:
    T* data;
    int size;
    int index;
};

int main()
{   array<int, long> numbers(100);
    array<float, float> values(200);
    int i;
    for (i = 0; i < 50; i++) numbers.add_value(i);
    numbers.show_array();
    cout << "Sum = " << numbers.sum() << endl;
    cout << "Average = " << numbers.average_value() << endl;
    for (i = 0; i < 100; i++) values.add_value(i * 100);
    values.show_array();
    cout << "Sum = " << values.sum() << endl;
    cout << "Average = " << values.average_value() << endl;
}