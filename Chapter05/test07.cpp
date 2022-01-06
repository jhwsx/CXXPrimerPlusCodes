#include <iostream>
#include <string>

int main_test07()
{
	using namespace std;
	struct car
	{
		// 生产商
		string make;
		// 生产年份
		int yearmade;
	};

	int carnum;
	cout << "How many cars do you wish to catalog? ";
	cin >> carnum;
	cin.get();
	// 创建动态结构数组
	car* p = new car[carnum];

	for (int i = 0; i < carnum; i++)
	{
		cout << "Car#" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, p[i].make);
		cout << "Please enter the year made: ";
		cin >> p[i].yearmade;
		cin.get();
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < carnum; i++)
	{
		cout << p[i].yearmade << " " << p[i].make << endl;
	}
	delete[] p;
	return 0;
}

/*
How many cars do you wish to catalog? 2
Car#1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car#2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser
*/