#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;
class Telephone {
private:
	int number;
	string category;
public:
	Telephone(int n)
	{
		number = n;
		category = "Не установлена";
	}
	Telephone()
	{
		number = 0;
		category = "Не установлена";
	}
	Telephone(int n, string cat)
	{
		number = n;
		category = cat;
	}

	void setNumber(int newNumber)
	{
		number = newNumber;
	}
	int getNumber()
	{
		return number;
	}
	void setCategory(string cat)
	{
		category = cat;
	}
	string getCategory()
	{
		return category;
	}
};