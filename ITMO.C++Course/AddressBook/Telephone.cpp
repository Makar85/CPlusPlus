#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Telephone.h"

using namespace std;


Telephone::Telephone()
{
	Telephone::number = "Не указан";
	Telephone::category = "Не указан";
}

Telephone::Telephone(string n, string cat)
	{
		Telephone::number = n;
		Telephone::category = cat;
	}


void Telephone::SetNumber(string n)
	{
	   number = n;	  
	}
void Telephone::SetCategory(string cat)
    {
	   category = cat;
    }
string Telephone::GetNumber()
	{
	    return number;
	}
string Telephone::GetCategory()
	{
		return category;
	}



