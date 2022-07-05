//Задание 3. Размен монет
//Известна монетная система России. Требуется выдать набор монет с наименьшим возможным количеством монет. 
//Каждое число из набора можно использовать сколько угодно раз.

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	system("chcp 1251");
    vector<int> n = { 1,2,5,10 };
    int sum, ans;
	cout << "\nВведите сумму для расчета (без учета копеек): "; cin >> sum;
	cout << "\tМонет достоинством\tштук\n";
	for (int i = 3; i >= 0; i--)
	{
		ans = sum / n[i];
		sum %= n[i];
		cout << "\t\t"<<n[i]<<"\t\t"<< ans<<endl;
	}
	return 0;
}

