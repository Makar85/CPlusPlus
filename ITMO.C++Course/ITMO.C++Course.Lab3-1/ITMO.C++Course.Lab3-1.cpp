

#include <iostream>
#include <string>

using namespace std;

string privet(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}


int main()
{
    string imya;
    cout << "What is your name?" << endl;
    cin >> imya;
    privet(imya);
    return 0;
}




