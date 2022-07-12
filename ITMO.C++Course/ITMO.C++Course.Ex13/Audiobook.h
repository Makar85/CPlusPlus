#include "Item.h"
#pragma once
class AudioBook: public Item
{
private:
double time;
public:
void getdata()
{
Item::getdata();
cout << "Введите время звучания : ";
cin >> time;
}
void putdata()
{
Item::putdata();
cout << "\nВремя звучания : " << time;
}
};