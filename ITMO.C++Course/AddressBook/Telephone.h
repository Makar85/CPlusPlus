#pragma once
#include <string>

using namespace std;
class Telephone {
private:
	string number;
	string category;
public:
	Telephone();
	Telephone(string, string);
	
	void SetNumber(string);
	void SetCategory(string);
	string GetNumber();
	string GetCategory();
};